#include "library2.hpp"

#include <gtest/gtest.h>

TEST(library2, simple_call)
{
	int result = funcLibrary2();

	EXPECT_EQ(1, result);
}