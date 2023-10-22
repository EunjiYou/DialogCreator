// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AssetTypeActions_Base.h"

/**
 * 
 */
class DIALOGCREATOREDITOR_API FAssetTypeActions_DialogTree : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_DialogTree(EAssetTypeCategories::Type AssetCategory);

	// DialogTree 애셋을 누를 때 진행할 Action
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

	// 여기서 정의한 Action을 지정할 Class
	virtual UClass* GetSupportedClass() const override;

	virtual FText GetName() const override;
	virtual uint32 GetCategories() override;
	virtual FColor GetTypeColor() const override;

private:
	EAssetTypeCategories::Type AssetCategory = EAssetTypeCategories::Blueprint;
};
