#include "library1.hpp"

#include <gtest/gtest.h>

TEST(library1, expect_types)
{
	EXPECT_EQ(0, 0);
	EXPECT_GT(1, 0);
	EXPECT_LT(0, 1);

	EXPECT_TRUE(1 == 1);
	EXPECT_FALSE(1 == 0);
}

TEST(library1, expect_str)
{
	const char sBob[] = "Bob";
	const char sBill[] = "Bill";

	EXPECT_STREQ(sBob, "Bob");
	EXPECT_STRNE(sBob, sBill);

	EXPECT_STRCASEEQ(sBob, "bob");
}
