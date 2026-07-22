/**************************************************************************************************
 * PracticeModeUI.cpp
 * LIMBITLESS SOLUTIONS INC.                                                              2/21/2025
 * https://limbitless-solutions.org/                                                         
 * 
 * Author:  Donny Akers
 * 
 * Copyright (C) 2025 Limbitless Solutions Inc.
 * Copyright (C) 2025 University of Central Florida
 * 
 * This work is licensed under the:
 * Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/ 
 * or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
 */

#include "Widgets/PracticeModeUI.h"
#include <Fonts/FontMeasure.h>
#include <Components/TextBlock.h>
#include <Rendering/SlateRenderer.h>
#include "Framework/Application/SlateApplication.h"

FVector2D UPracticeModeUI::GetTextSize(const UTextBlock* TextBlock) const
{
	if (!TextBlock) { return { 0,0 }; }

	const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	FVector2D Size = FontMeasure->Measure(TextBlock->GetText(), TextBlock->GetFont());
	return Size;
}
