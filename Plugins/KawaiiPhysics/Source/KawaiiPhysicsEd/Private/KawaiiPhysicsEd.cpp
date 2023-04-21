// Fill out your copyright notice in the Description page of Project Settings.

#include "KawaiiPhysicsEd.h"
#include "Modules/ModuleManager.h"
#include "Textures/SlateIcon.h"
#include "KawaiiPhysicsEditMode.h"

#define LOCTEXT_NAMESPACE "FKawaiiPhysicsModuleEd"



void FKawaiiPhysicsEdModule::StartupModule()
{
	FEditorModeRegistry::Get().RegisterMode<FKawaiiPhysicsEditMode>("AnimGraph.SkeletalControl.KawaiiPhysics", LOCTEXT("FKawaiiPhysicsEditMode", "Kawaii Physics"), FSlateIcon(), false);
}



void FKawaiiPhysicsEdModule::ShutdownModule()
{
	FEditorModeRegistry::Get().UnregisterMode("AnimGraph.SkeletalControl.KawaiiPhysics");
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FKawaiiPhysicsEdModule, KawaiiPhysicsEd)
//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, KawaiiPhysicsEd, "KawaiiPhysicsEd" );
