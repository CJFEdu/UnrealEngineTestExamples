#pragma once

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"


namespace TagsExampleTest
{
	inline FString Category = TEXT("TestDemo");
	inline const int TestFlags = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

}

// Logging URL https://unrealcommunity.wiki/logging-lgpidy6i
DECLARE_LOG_CATEGORY_EXTERN(ExampleTests, Log, All);
