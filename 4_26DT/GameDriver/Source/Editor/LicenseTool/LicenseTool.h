#pragma once

#include "../ExampleTabToolBase.h"

class LicenseTool : public FExampleTabToolBase
{
public:
	virtual ~LicenseTool() {}
	virtual void OnStartupModule() override;
	virtual void OnShutdownModule() override;
	virtual void Initialize() override;
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) override;
};