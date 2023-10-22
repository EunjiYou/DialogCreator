// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTypeActions_DialogTree.h"

#include "DialogTree.h"

FAssetTypeActions_DialogTree::FAssetTypeActions_DialogTree(EAssetTypeCategories::Type AssetCategory)
	: AssetCategory(AssetCategory)
{
}

void FAssetTypeActions_DialogTree::OpenAssetEditor(const TArray<UObject*>& InObjects,
                                                   TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	// Todo : Open DialogCreatorEditor
}

FText FAssetTypeActions_DialogTree::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_DialogTree", "DialogTree Asset");
}

UClass* FAssetTypeActions_DialogTree::GetSupportedClass() const
{
	return UDialogTree::StaticClass();
}

uint32 FAssetTypeActions_DialogTree::GetCategories()
{
	return AssetCategory;
}

FColor FAssetTypeActions_DialogTree::GetTypeColor() const
{
	return FColor::White;
}
