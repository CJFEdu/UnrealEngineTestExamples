#include "TestingBasics.h"
#include "Misc/AutomationTest.h"

// Github Repository
// https://github.com/CJFEdu/UnrealEngineTestExamples



/*	Notes
 *	Outside of Blueprints and Reflection System
 *  Console Command Line
 *  C++ only
 *  Compile files
 *  Session Frontend
 *  Refresh Session Frontend
 **/

// Automation Testing documentation  https://docs.unrealengine.com/5.1/en-US/automation-technical-guide/
// Source File Recommendation Private\Tests

// Automation Flags documentation https://docs.unrealengine.com/5.1/en-US/API/Runtime/Core/Misc/EAutomationTestFlags__Type/
IMPLEMENT_SIMPLE_AUTOMATION_TEST(TB_SimpleDemo, "TestDemo.Examples.TestingBasics.Simple Demo",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)


// Automation System Overview https://docs.unrealengine.com/5.1/en-US/automation-system-in-unreal-engine/
// Example tests TimespanTest.cpp and EditorAutomationTests.cpp

// Child of FAutomationTestBase
// Documentation https://docs.unrealengine.com/5.1/en-US/API/Runtime/Core/Misc/FAutomationTestBase/
bool TB_SimpleDemo::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return true;
}
