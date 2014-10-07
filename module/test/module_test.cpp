#include "CppUTest/TestHarness.h"

TEST_GROUP(Module)
{

};

TEST(Module, Fail)
{
	FAIL("Fail me!");
}
