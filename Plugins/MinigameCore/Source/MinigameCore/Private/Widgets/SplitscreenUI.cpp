/**************************************************************************************************
 * SplitscreenUI.cpp
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

#include "Widgets/SplitscreenUI.h"
#include "Components/Overlay.h"
#include <Blueprint/WidgetLayoutLibrary.h>
#include <Engine/CanvasRenderTarget2D.h>

int USplitscreenUI::GetNumSplits() const
{
	return Splits.Num();
}

UOverlay* USplitscreenUI::GetSplitPanel(int Num) const
{
	return Splits[Num];
}

void USplitscreenUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	/*for (auto Target : RenderTargets)
	{
		Target->ResizeTarget(TargetSize.X, TargetSize.Y);
	}*/
}