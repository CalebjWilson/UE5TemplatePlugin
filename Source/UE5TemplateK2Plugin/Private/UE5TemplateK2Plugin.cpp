// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5TemplateK2Plugin.h"

#define LOCTEXT_NAMESPACE "FUE5TemplateK2PluginModule"

void FUE5TemplateK2Plugin::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUE5TemplateK2Plugin::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE5TemplateK2Plugin, UE5TemplateK2Plugin)