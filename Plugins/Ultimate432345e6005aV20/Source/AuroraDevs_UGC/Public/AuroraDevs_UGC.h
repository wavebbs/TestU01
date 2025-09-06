// Copyright(c) Aurora Devs 2022-2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#ifndef AURORA_DEVS_UGC
#define AURORA_DEVS_UGC
#endif

class FAuroraDevs_UGCModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
