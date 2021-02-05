#include "division.h"

void setUp()
{    }

void tearDown()
{    }

void test_division(void)
{
    TEST_ASSERT_EQUAL(3, division(9,3));
    TEST_ASSERT_EQUAL(0, division(1,0));
    TEST_ASSERT_EQUAL(1, division(10,10));
}