// Fill out your copyright notice in the Description page of Project Settings.


#include "WindowsBluetoothManager.h"
#include <iomanip>
#include <sstream>
#include "WinBLEManager.h"
#include "WindowsFlexController.h"

void UWindowsBluetoothManager::CreateWinBLEManager()
{
	WinBLEManager = NewObject<UWinBLEManager>(this);

	if (!WinBLEManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create windows bluetooth manager!"));
		return;
	}

	WinBLEManager->Init();
}

void UWindowsBluetoothManager::Init(const FString& writeCharacteristicUUID)
{
	IBluetoothManager::Init(writeCharacteristicUUID);
	CreateWinBLEManager();
	
	WriteCharacteristicUUID = FStringToWinrtGUID(writeCharacteristicUUID);
}



void UWindowsBluetoothManager::Deinit()
{
	if (WinBLEManager)
	{
		WinBLEManager->Deinit();
	}	
}

winrt::guid UWindowsBluetoothManager::FStringToWinrtGUID(const FString& UUIDString) const
{
	// Ensure the UUID is properly formatted
	if (UUIDString.Len() != 36)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid UUID format: %s"), *UUIDString);
		return winrt::guid{}; // Return empty GUID
	}
	// Extract GUID components from the string
	uint32 A = FParse::HexNumber(*UUIDString.Mid(0, 8));    // First 8 characters
	uint16 B = FParse::HexNumber(*UUIDString.Mid(9, 4));    // Next 4 characters
	uint16 C = FParse::HexNumber(*UUIDString.Mid(14, 4));   // Next 4 characters

	std::array<uint8_t, 8> data4 {};
	for (int i = 0; i < 2; i++)
	{
		data4[i] = FParse::HexNumber(*UUIDString.Mid(19 + i*2, 2));
	}
	
	for (int i = 0; i < 6; i++)
	{
		data4[i + 2] = FParse::HexNumber(*UUIDString.Mid(24 + (i * 2), 2));

	}

	// Return the constructed winrt::guid
	return winrt::guid(A, B, C, data4);
}

void UWindowsBluetoothManager::ConvertFStringArrayToGuidArray(const TArray<FString>& fstrings, TArray<winrt::guid>& guids) const
{
	for (const FString& string : fstrings)
	{
		guids.Add(FStringToWinrtGUID(string));
	}
}

void UWindowsBluetoothManager::SetServiceUUIDsToScanFor(const TArray<FString>& filteredServiceUUIDs)
{
	if (WinBLEManager)
	{
		TArray<winrt::guid> guids;
		ConvertFStringArrayToGuidArray(filteredServiceUUIDs, guids);
		WinBLEManager->SetServiceUUIDsToScanFor(guids);
	}
}

void UWindowsBluetoothManager::ScanForDevices(const FOnFlexFoundSignature& onDeviceFoundCallback)
{
	if (WinBLEManager)
	{
		WinBLEManager->ScanForDevices(FOnDeviceFoundSignature::CreateLambda([this, onDeviceFoundCallback]( BtDeviceHolder& deviceHolder){
			{
				uint64_t address = deviceHolder.GetDevice().BluetoothAddress();
				if (CreatedControllers.Contains(address))
				{
					onDeviceFoundCallback.ExecuteIfBound(CreatedControllers[address]);
				}
				else
				{
					UWindowsFlexController* flexController = NewObject<UWindowsFlexController>(this);
					flexController->Initialize(&deviceHolder, WriteCharacteristicUUID);
					CreatedControllers.Add(address, flexController);
					onDeviceFoundCallback.ExecuteIfBound(flexController);
				}
				
			}}));
	}
}

void UWindowsBluetoothManager::StopScan()
{
	if (WinBLEManager)
	{
		WinBLEManager->StopScan();
	}	
}

void UWindowsBluetoothManager::ConnectToDevice(UFlexController* device, const TArray<FString> characteristicIds,
	const FOnFlexConnectedSignature& onDeviceConnectedCallback,
	const FOnFlexConnectionErrorSignature& onFailToConnectDeviceCallback,
	const FOnFlexServiceSetSignature& onServiceSetCallback) const
{
	if (WinBLEManager && device)
	{
		UWindowsFlexController* asWindowsFlexController = Cast<UWindowsFlexController>(device);

		check(asWindowsFlexController);

		if (asWindowsFlexController->GetDeviceHolder())
		{
			TArray<winrt::guid> guids;
			ConvertFStringArrayToGuidArray(characteristicIds, guids);

			auto serviceSet = FOnServiceSetSignature::CreateLambda([onServiceSetCallback]()
			{
				onServiceSetCallback.ExecuteIfBound();
			});
			WinBLEManager->ConnectToDevice(*asWindowsFlexController->GetDeviceHolder(), guids,
				onDeviceConnectedCallback, onFailToConnectDeviceCallback, serviceSet);
		}
	}
}

void UWindowsBluetoothManager::DisconnectDevice(const UFlexController* device,
	const FOnFlexDisconnectedSignature& onDeviceDisconnectedCallback,
	const FOnFlexDisconnectionErrorSignature& onFailToDisconnectDeviceCallback) const
{
	if (WinBLEManager && device)
	{
		const UWindowsFlexController* asWindowsFlexController = Cast<UWindowsFlexController>(device);

		check(asWindowsFlexController);

		if (asWindowsFlexController->GetDeviceHolder())
		{
			WinBLEManager->DisconnectDevice(*asWindowsFlexController->GetDeviceHolder(), onDeviceDisconnectedCallback, onFailToDisconnectDeviceCallback);
		}
	}
}


