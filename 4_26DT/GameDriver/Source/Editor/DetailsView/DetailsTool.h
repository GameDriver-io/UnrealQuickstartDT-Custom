#pragma once

#include "../ExampleTabToolBase.h"

class DetailsTool : public FExampleTabToolBase
{
public:
	virtual ~DetailsTool() {}
	virtual void OnStartupModule() override;
	virtual void OnShutdownModule() override;
	virtual void Initialize() override;
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) override;
};