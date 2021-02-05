
#include "add.h"

void setUp()
{    }

void tearDown()
{    }

void test_add(void)
{
    TEST_ASSERT_EQUAL(12, add(4,8));
    TEST_ASSERT_EQUAL(-30, add(-50, 20));
    TEST_ASSERT_EQUAL(12.4, add(8.2, 4.2));
}