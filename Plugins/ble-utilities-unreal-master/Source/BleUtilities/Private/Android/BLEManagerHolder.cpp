// Copyright (c) 2019 Nineva Studios

#include "BLEManagerHolder.h"

#include "Async/Async.h"
#include "BLEDevice.h"
#include "BLEManager.h"
#include "BleLog.h"
#include "Utils/BLEAndroidUtils.h"

#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#endif

static BLEManagerHolder* pManagerHolder = nullptr;

BLEManagerHolder::BLEManagerHolder()
{
}

BLEManagerHolder* BLEManagerHolder::GetInstance()
{
	if (!pManagerHolder)
	{
		pManagerHolder = new BLEManagerHolder();
	}

	return pManagerHolder;
}

void BLEManagerHolder::AddManager(FGuid guid, IBLEManagerInterface* pManager)
{
	UE_LOG(LogBle, Verbose, TEXT("Add internal manager %s"), *guid.ToString());

	if (BleManagers.Contains(guid))
	{
		UE_LOG(LogBle, Warning, TEXT("Internal manager with guid %s already exists"), *guid.ToString());
		return;
	}

	BleManagers.Add(guid, pManager);
}

void BLEManagerHolder::RemoveManager(FGuid guid)
{
	UE_LOG(LogBle, Verbose, TEXT("Remove internal manager %s"), *guid.ToString());
	BleManagers.Remove(guid);
}

IBLEManagerInterface* const BLEManagerHolder::GetManager(FGuid guid) const
{
	auto* manager = BleManagers.Find(guid);
	return manager ? *manager : nullptr;
}

#if PLATFORM_ANDROID

JNI_METHOD void Java_com_ninevastudios_androidbleunrealapi_BleUtilitiesManager_onNewDeviceDiscovered(JNIEnv* env, jclass clazz, 
	jstring guid, jobject jDevice, jstring jserviceUUID)
{
	UE_LOG(LogBle, Verbose, TEXT("Java callback onNewDeviceDiscovered"));

	if (!pManagerHolder)
	{
		return;
	}

	FString strGuid = BLEAndroidUtils::GetFString(guid);
	FString serviceUUID = BLEAndroidUtils::GetFString(jserviceUUID);
	FGuid managerGuid;
	if (!FGuid::Parse(strGuid, managerGuid))
	{
		return;
	}
	
	auto manager = pManagerHolder->GetManager(managerGuid);
	if (!manager)
	{
		return;
 	}

	// Promote jDevice to GlobalRef to safely pass across threads
	jobject GlobalDeviceRef = env->NewGlobalRef(jDevice);

	// Copy needed data
	FString ServiceUUIDCopy = serviceUUID;

	// Schedule all UE object creation on the Game Thread
	AsyncTask(ENamedThreads::GameThread, [GlobalDeviceRef, ServiceUUIDCopy, managerGuid]()
	{
		auto manager = pManagerHolder->GetManager(managerGuid);
		if (!manager)
		{
			return;
		}

		UBLEManager* BLEManager = Cast<UBLEManager>(manager);
		if (!BLEManager)
		{
			return;
		}

		// Safely create UE object on game thread
		UBLEDevice* BLEDevice = NewObject<UBLEDevice>();
		BLEDevice->SetDeviceInternal(GlobalDeviceRef, ServiceUUIDCopy);

		TScriptInterface<IBLEDeviceInterface> BLEDeviceInterface;
		BLEDeviceInterface.SetObject(BLEDevice);
		BLEDeviceInterface.SetInterface(Cast<IBLEDeviceInterface>(BLEDevice));

		BLEManager->OnDeviceFound(BLEDevice);

		// Clean up global ref
		JNIEnv* GameEnv = FAndroidApplication::GetJavaEnv();
		GameEnv->DeleteGlobalRef(GlobalDeviceRef);
	});
	/*
	UBLEManager* BLEManager = dynamic_cast<UBLEManager*>(manager);
	UBLEDevice* BLEDevice = NewObject<UBLEDevice>();
	BLEDevice->SetDeviceInternal(jDevice, serviceUUID);
	TScriptInterface<IBLEDeviceInterface> BLEDeviceInterface;
	BLEDeviceInterface.SetObject(BLEDevice);
	BLEDeviceInterface.SetInterface(Cast<IBLEDeviceInterface>(BLEDevice));

	AsyncTask(ENamedThreads::GameThread, [=]() {
		BLEManager->OnDeviceFound(BLEDevice);
	});*/
}

JNI_METHOD void Java_com_ninevastudios_androidbleunrealapi_BleUtilitiesDevice_onDeviceConnected(JNIEnv* env, jclass clazz, jstring guid)
{
	UE_LOG(LogBle, Verbose, TEXT("Java callback onDeviceConnected"));

	if (!pManagerHolder)
	{
		return;
	}

	FString strGuid = BLEAndroidUtils::GetFString(guid);
	FGuid managerGuid;
	if (FGuid::Parse(strGuid, managerGuid))
	{
		auto manager = pManagerHolder->GetManager(managerGuid);
		if (manager)
		{
			UBLEManager* BLEManager = dynamic_cast<UBLEManager*>(manager);
			
			AsyncTask(ENamedThreads::GameThread, [=]() {
				BLEManager->OnDeviceConnected();
			});	
		}
	}
}

JNI_METHOD void Java_com_ninevastudios_androidbleunrealapi_BleUtilitiesDevice_onDeviceDisconnected(JNIEnv* env, jclass clazz, jstring guid)
{
	UE_LOG(LogBle, Verbose, TEXT("Java callback onDeviceDisconnected"));

	if (!pManagerHolder)
	{
		return;
	}

	FString strGuid = BLEAndroidUtils::GetFString(guid);
	FGuid managerGuid;
	if (FGuid::Parse(strGuid, managerGuid))
	{
		auto manager = pManagerHolder->GetManager(managerGuid);
		if (manager)
		{
			UBLEManager* BLEManager = dynamic_cast<UBLEManager*>(manager);

			AsyncTask(ENamedThreads::GameThread, [=]() {
				BLEManager->OnDeviceDisconnected();
			});
		}
	}
}

JNI_METHOD void Java_com_ninevastudios_androidbleunrealapi_BleUtilitiesDevice_onServiceSet(JNIEnv* env, jclass clazz,
	jstring guid)
{
	UE_LOG(LogBle, Verbose, TEXT("Java callback onServiceSet"));

	if (!pManagerHolder)
	{
		return;
	}

	FString strGuid = BLEAndroidUtils::GetFString(guid);
	FGuid managerGuid;

	if (FGuid::Parse(strGuid, managerGuid))
	{
		auto manager = pManagerHolder->GetManager(managerGuid);
		if (manager)
		{
			UBLEManager* BLEManager = dynamic_cast<UBLEManager*>(manager);

			AsyncTask(ENamedThreads::GameThread, [=]() {
				BLEManager->OnServiceSet();
			});
		}
	}
}

#endif