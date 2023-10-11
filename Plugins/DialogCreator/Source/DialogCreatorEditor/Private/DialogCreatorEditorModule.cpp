// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogCreatorEditorModule.h"

IMPLEMENT_MODULE(FDialogCreatorEditorModule, DialogCreatorEditor)

#define LOCTEXT_NAMESPACE "FDialogCreatorModule"

void FDialogCreatorEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDialogCreatorEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
