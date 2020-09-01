#include "library1.hpp"

#include <gtest/gtest.h>

TEST(library1, assert_types)
{
	ASSERT_EQ(0, 0);
	ASSERT_GT(1, 0);
	ASSERT_LT(0, 1);
}
