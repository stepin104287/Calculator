#include <percentage.h>

void setUp()
{    }

void tearDown()
{    }

void test_percentage(void)
{
    TEST_ASSERT_EQUAL(15, percentage(15,100));
    TEST_ASSERT_EQUAL(20, percentage(20, 100));
    TEST_ASSERT_EQUAL(3.90, percentage(15, 26));
    
    TEST_ASSERT_EQUAL(30, percentage(15,100));
    TEST_ASSERT_EQUAL(3.0, percentage(15,26));
}