#include "multiplication.h"
void setup()
{

}
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(20,multiplication(4,5))
    TEST_ASSERT_EQUAL(43.800003,multiplication(6,7.3))
    TEST_ASSERT_EQUAL(15.400000,multiplication(2.2,7))
}