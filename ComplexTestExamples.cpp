#include "TestingBasics.h"
#include "Misc/AutomationTest.h"

// Github Repository
// https://github.com/CJFEdu/UnrealEngineTestExamples

namespace TagsExampleTest
{
	FString ComplexTestSubCategory = TEXT("ComplexExamples");
	FString ComplexTestPrefix = Category + TEXT(".") + ComplexTestSubCategory + TEXT(".");
	
}


IMPLEMENT_COMPLEX_AUTOMATION_TEST(ComplexTestExamples, TagsExampleTest::ComplexTestPrefix + TEXT("Return True"),TagsExampleTest::TestFlags)

void ComplexTestExamples::GetTests(TArray<FString>& OutBeautifiedNames, TArray<FString>& OutTestCommands) const
{
	
}

bool ComplexTestExamples::RunTest(const FString& Parameters)
{
	return true;
}
