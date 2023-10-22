// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"

#include "DialogTreeFactory.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGCREATOREDITOR_API UDialogTreeFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;

	// �ּ� �߰� �޴����� ������ �� ����
	virtual bool ShouldShowInNewMenu() const override;
};
