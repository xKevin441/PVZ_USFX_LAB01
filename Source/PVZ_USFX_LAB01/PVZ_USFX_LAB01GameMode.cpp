// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB01GameMode.h"
#include "PVZ_USFX_LAB01Pawn.h"

APVZ_USFX_LAB01GameMode::APVZ_USFX_LAB01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB01Pawn::StaticClass();
}

