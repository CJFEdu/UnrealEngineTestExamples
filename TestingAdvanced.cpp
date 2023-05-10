#include "TestingBasics.h"


// Github Repository
// https://github.com/CJFEdu/UnrealEngineTestExamples

/*	Notes
 *	Categories in Session Frontend
 */


// Logging URL https://unrealcommunity.wiki/logging-lgpidy6i
DEFINE_LOG_CATEGORY(ExampleTests);

namespace TagsExampleTest
{
	FString AdvancedTestingSubCategory = TEXT("AdvancedTesting");
	FString AdvancedTestingPrefix = Category + TEXT(".") + AdvancedTestingSubCategory + TEXT(".");

	
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(TA_CustomErrorCategories, TagsExampleTest::AdvancedTestingPrefix + TEXT("Custom Error Catetegories"),
								 TagsExampleTest::TestFlags)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(TA_AlternateCategories, TagsExampleTest::AdvancedTestingPrefix + TEXT("Alternate Catetegories"),
								EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter |
								EAutomationTestFlags::LowPriority)

bool TA_CustomErrorCategories::RunTest(const FString& Parameters)
{
	UE_LOG(ExampleTests, Error, TEXT("This test is expected to fail."));
	return true;
}

bool TA_AlternateCategories::RunTest(const FString& Parameters)
{
	return true;
}