#include "MinigameParameterOverrideCustomization.h"
#include "Components/MinigameCustomizablePlayerComponent.h"
#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"
#include "PropertyHandle.h"
#include "MuCO/CustomizableObject.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "FMinigameParameterOverrideCustomization"

TSharedRef<IPropertyTypeCustomization> FMinigameParameterOverrideCustomization::MakeInstance()
{
    return MakeShareable(new FMinigameParameterOverrideCustomization);
}

void FMinigameParameterOverrideCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    HeaderRow.NameContent()[StructPropertyHandle->CreatePropertyNameWidget()]
        .ValueContent()[StructPropertyHandle->CreatePropertyValueWidget()];
}

void FMinigameParameterOverrideCustomization::ReadCurrentValues()
{
    FString CurrentParamName;
    if (ParameterNameHandle.IsValid()
        && ParameterNameHandle->GetValue(CurrentParamName) == FPropertyAccess::Success)
    {
        auto AvailableParam = AvailableParameters.FindByPredicate(
            [&CurrentParamName](TSharedPtr<FString> Param){ return *Param == CurrentParamName; });
        if (AvailableParam)
        {
            SelectedParameter = *AvailableParam;

        }
    }

    FString CurrentValueName;
    if (SelectedParameter && ParameterValueHandle.IsValid()
        && ParameterValueHandle->GetValue(CurrentValueName) == FPropertyAccess::Success)
    {
        RefreshValueOptions(CurrentParamName);
        
        auto AvailableValue = AvailableValues.FindByPredicate(
            [&CurrentValueName](TSharedPtr<FString> Value) { return *Value == CurrentValueName; });
        if (AvailableValue)
        {
            SelectedValue = *AvailableValue;
        }
    }
}

void FMinigameParameterOverrideCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    TArray<UObject*> OuterObjects;
    StructPropertyHandle->GetOuterObjects(OuterObjects);

    if (OuterObjects.Num() > 0)
    {
        // Assumption is the first outer object is a MinigameCustomizablePlayer with a CO
        UMinigameCustomizablePlayerComponent* Comp = Cast<UMinigameCustomizablePlayerComponent>(OuterObjects[0]);
        if (Comp)
        {
            CO = Comp->GetCustomizableObject();
        }
    }
    
    ParameterNameHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FCustomizationOverride, ParameterName));
    ParameterValueHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FCustomizationOverride, ParameterValue));

    if (CO)
    {
        RefreshParameterOptions();
        ReadCurrentValues();
    }

    StructBuilder.AddCustomRow(LOCTEXT("ParameterName", "Parameter Name"))
        .NameContent()[ParameterNameHandle->CreatePropertyNameWidget()]
        .ValueContent()
        [
            SNew(SComboBox<TSharedPtr<FString>>)
            .OptionsSource(&AvailableParameters)
            .OnSelectionChanged(this, &FMinigameParameterOverrideCustomization::OnParameterChanged)
            .OnGenerateWidget_Lambda([](TSharedPtr<FString> InItem)
            {
                return SNew(STextBlock).Text(FText::FromString(*InItem));
            })
            .Content()
            [
                SNew(STextBlock).Text_Lambda([this]() -> FText {
                    return SelectedParameter.IsValid() ? FText::FromString(*SelectedParameter) : FText::FromString("Select");
                })
            ]
        ];

    StructBuilder.AddCustomRow(LOCTEXT("ParameterValue", "Parameter Value"))
        .NameContent()[ParameterValueHandle->CreatePropertyNameWidget()]
        .ValueContent()
        [
            SNew(SComboBox<TSharedPtr<FString>>)
            .OptionsSource(&AvailableValues)
            .OnSelectionChanged(this, &FMinigameParameterOverrideCustomization::OnValueChanged)
            .OnGenerateWidget_Lambda([](TSharedPtr<FString> InItem)
            {
                return SNew(STextBlock).Text(FText::FromString(*InItem));
            })
            .Content()
            [
                SNew(STextBlock).Text_Lambda([this]() -> FText {
                    return SelectedValue.IsValid() ? FText::FromString(*SelectedValue) : FText::FromString("Select");
                })
            ]
        ];
}

void FMinigameParameterOverrideCustomization::RefreshParameterOptions()
{
    AvailableParameters.Empty();

    if (!CO)
    {
        return;
    }

    if (!CO->IsCompiled())
    {
        FCompileParams Params;
        CO->Compile(Params);
    }

    int32 Count = CO->GetParameterCount();

    for (int32 i = 0; i < Count; ++i)
    {
        FString ParamName = CO->GetParameterName(i);
        if (CO->GetParameterTypeByName(ParamName) == EMutableParameterType::Int)
        {
            AvailableParameters.Add(MakeShared<FString>(ParamName));
        }
    }
}

void FMinigameParameterOverrideCustomization::RefreshValueOptions(const FString& ParamName)
{
    AvailableValues.Empty();

    if (!CO) return;

    EMutableParameterType Type = CO->GetParameterTypeByName(ParamName);

    if (Type == EMutableParameterType::Int)
    {
        int32 OptionCount = CO->GetEnumParameterNumValues(ParamName);
        for (int32 i = 0; i < OptionCount; ++i)
        {
            AvailableValues.Add(MakeShared<FString>(CO->GetEnumParameterValue(ParamName, i)));
        }
    }

    // Add handling for Float, Bool, etc., if needed
}

void FMinigameParameterOverrideCustomization::OnParameterChanged(TSharedPtr<FString> NewSelection, ESelectInfo::Type)
{
    if (!NewSelection.IsValid() || !ParameterNameHandle.IsValid()) return;

    SelectedParameter = NewSelection;
    ParameterNameHandle->SetValue(*NewSelection);

    SelectedValue = nullptr;
    
    if (CO)
    {
        RefreshValueOptions(*NewSelection);
    }
}

void FMinigameParameterOverrideCustomization::OnValueChanged(TSharedPtr<FString> NewSelection, ESelectInfo::Type)
{
    if (!NewSelection.IsValid() || !ParameterValueHandle.IsValid()) return;

    SelectedValue = NewSelection;
    ParameterValueHandle->SetValue(*NewSelection);
}

#undef LOCTEXT_NAMESPACE