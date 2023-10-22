// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogCreatorEditorModule.h"

#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_DialogTree.h"

IMPLEMENT_MODULE(FDialogCreatorEditorModule, DialogCreatorEditor)

#define LOCTEXT_NAMESPACE "FDialogCreatorModule"

void FDialogCreatorEditorModule::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();

	// DialogCreator Category 추가
	EAssetTypeCategories::Type AssetCategory = AssetTools.RegisterAdvancedAssetCategory(TEXT("DialogCreator"), LOCTEXT("DialogCreatorCategory", "Dialog Creator"));

	// DialogTree AssetTypeAction 등록
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FAssetTypeActions_DialogTree(AssetCategory)));
}

void FDialogCreatorEditorModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
