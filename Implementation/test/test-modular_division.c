#include "modular_division.h"

void setUp()
{    }

void tearDown()
{    }

void test_modular_division(void)
{
    TEST_ASSERT_EQUAL(4, modular_division_int(4,8));
    TEST_ASSERT_EQUAL(0, modular_division_int(10,5));
    TEST_ASSERT_EQUAL(1.9, modular_division_float(10.3, 4.2);
}