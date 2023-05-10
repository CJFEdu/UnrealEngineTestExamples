#include "TestingBasics.h"
#include "Misc/AutomationTest.h"
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "Tests/AutomationEditorCommon.h"

// Github Repository
// https://github.com/CJFEdu/UnrealEngineTestExamples

// Automation Technical Guide
//https://docs.unrealengine.com/5.1/en-US/automation-technical-guide/

namespace TagsExampleTest
{
	FString SimpleTestSubCategory = TEXT("SimpleExamples");
	FString SimpleTestPrefix = Category + TEXT(".") + SimpleTestSubCategory + TEXT(".");
	
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_ReturnTrue, TagsExampleTest::SimpleTestPrefix + TEXT("Return True"),TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_ReturnFalse, TagsExampleTest::SimpleTestPrefix + TEXT("Return False"),TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_UELogError, TagsExampleTest::SimpleTestPrefix + TEXT("UE_LOG Error"),TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_AddError, TagsExampleTest::SimpleTestPrefix + TEXT("Add Error"),TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_AddEqual, TagsExampleTest::SimpleTestPrefix + TEXT("Add Equal"),TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(ST_World, TagsExampleTest::SimpleTestPrefix + TEXT("Add World"),TagsExampleTest::TestFlags)


bool ST_ReturnTrue::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return true;
}

bool ST_ReturnFalse::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return false;
}

bool ST_UELogError::RunTest(const FString& Parameters)
{
	UE_LOG(ExampleTests, Error, TEXT("This test is expected to fail."));
	return true;
}

// Child of FAutomationTestBase
// Documentation https://docs.unrealengine.com/5.1/en-US/API/Runtime/Core/Misc/FAutomationTestBase/

bool ST_AddError::RunTest(const FString& Parameters)
{
	AddError(TEXT("Quick Error Function"));
	return true;
}

bool ST_AddEqual::RunTest(const FString& Parameters)
{
	int actual = 1;
	int expected = 2;
	TestEqual(TEXT("Add Equal test "), actual, expected);
	return true;
}

bool ST_World::RunTest(const FString& Parameters)
{
	// FAutomationEditorCommonUtils Documentation https://docs.unrealengine.com/4.26/en-US/API/Editor/UnrealEd/Tests/FAutomationEditorCommonUtils/
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();
	if(!TestNotNull(TEXT("World"), World)) return false;
	
	return true;
}