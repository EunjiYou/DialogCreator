// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogTreeFactory.h"

#include "DialogCreator/Public/DialogTree.h"

UDialogTreeFactory::UDialogTreeFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Factory의 대상이 되는 Class 지정
	SupportedClass = UDialogTree::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UDialogTreeFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	check(InClass->IsChildOf(UDialogTree::StaticClass()));
	return NewObject<UDialogTree>(InParent, InClass, InName, Flags);
}

bool UDialogTreeFactory::ShouldShowInNewMenu() const
{
	return true;
}
