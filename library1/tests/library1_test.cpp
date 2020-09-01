#include "library1.hpp"

#include <gtest/gtest.h>

TEST(library1, simple_function_call)
{
	int sts = funcLibrary1();

	EXPECT_EQ(0, sts);
}