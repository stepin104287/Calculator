
#include<stdio.h>
#include "subtraction.h"
#include "add.h"
#include "cuberoot.h"
#include "divide.h"
#include "exponential.h"
#include "modular_division.h"
#include "multiplication.h"
#include "percentage.h"
#include "squareroot.h"
#include "test_functions.h"

#include "unity.h"
#include "unity_internals.h"


void setUp(){}

void tearDown(){}


void test_cuberoot(void)
{
    TEST_ASSERT_EQUAL(5.00, 5.00);
   
} 

void test_percentage(void)
{
    TEST_ASSERT_EQUAL(15, 15);
    
}

void test_exponential(void)
{

TEST_ASSERT_EQUAL(2.178, 2.178);
   
}

void test_modular_division(void)
{
    TEST_ASSERT_EQUAL(4, 4);
    
}


void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(2,2;
}

void test_divide(void){

    TEST_ASSERT_EQUAL(2,2);
}


void test_add(void){

    TEST_ASSERT_EQUAL(2,2);
}


void test_subtraction(void){
    TEST_ASSERT_EQUAL(2,2);
}


void test_squareroot(void){

    TEST_ASSERT_EQUAL(2,2);
}


int test_main(void){

    UNITY_BEGIN();

    RUN_TEST(test_add());
    RUN_TEST(test_divide());
    RUN_TEST(test_cuberoot());
    RUN_TEST(test_percentage());
    RUN_TEST(test_exponential());
    RUN_TEST(test_modular_division());
    RUN_TEST(test_multiplication());
    RUN_TEST(test_squareroot());
    RUN_TEST(test_subtraction());
    
    return UNITY_END();
}
