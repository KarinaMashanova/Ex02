#include "task1.h"
#include "gtest/gtest.h"



#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test1)
{
	ASSERT_FLOAT_EQ(1.414214, calc(2.0));

}


TEST(task1, test2)
{
	ASSERT_FLOAT_EQ(3.16227766, calc(3.0));

}

TEST(task1, average1)
{
	ASSERT_FLOAT_EQ(2.500000, average(2.0, 3.0));

}