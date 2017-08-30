// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NdiMediaSettings.h"
#include "IPluginManager.h"


UNdiMediaSettings::UNdiMediaSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ProductName(TEXT("NdiMedia"))
	, ProductDescription(TEXT("Unreal Engine 4 plug-in for NDI media streaming"))
	, Manufacturer(TEXT("Headcrash Industries LLC"))
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("NdiMedia"));
	VersionName = Plugin.IsValid() ? Plugin->GetDescriptor().VersionName : FString(TEXT("1.0"));
}
