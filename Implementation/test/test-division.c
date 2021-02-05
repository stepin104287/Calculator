#include "divide.h"

void setUp()
{    }

void tearDown()
{    }

void test_divide(void)
{
    TEST_ASSERT_EQUAL(3, divide_int(9,3));
    TEST_ASSERT_EQUAL(0, divide_int(0,1));
    TEST_ASSERT_EQUAL(2.45, divide_float(10.3,4.2));
}