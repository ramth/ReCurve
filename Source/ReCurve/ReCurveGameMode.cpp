// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ReCurveGameMode.h"
#include "ReCurvePawn.h"

AReCurveGameMode::AReCurveGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AReCurvePawn::StaticClass();
}

