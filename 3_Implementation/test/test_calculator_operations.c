#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "CALCULATOR"

// value testvalue = {6,2};
// value testvalue1 = {8,3};
// value testvalue2 = {10,5};
// value testvalue3 = {12,6};

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_s_root(void);
void test_fact(void);
void test_expo(void);




/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_s_root);
  RUN_TEST(test_fact);
  RUN_TEST(test_expo);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(8, addition(6, 2));
  TEST_ASSERT_EQUAL(11, addition(8,3));
  TEST_ASSERT_EQUAL(15, addition(10,5));
  TEST_ASSERT_EQUAL(18, addition(12,6));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(4, subtraction(6, 2));
  TEST_ASSERT_EQUAL(5, subtraction(8,3));
  TEST_ASSERT_EQUAL(5, subtraction(10,5));
  TEST_ASSERT_EQUAL(6, subtraction(12,6));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(12, multiplication(6, 2));
  TEST_ASSERT_EQUAL(24, multiplication(8,3));
  TEST_ASSERT_EQUAL(50, multiplication(10,5));
  TEST_ASSERT_EQUAL(72, multiplication(12,6));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(3, division(6, 2));
  TEST_ASSERT_EQUAL(2, division(8,3));
  TEST_ASSERT_EQUAL(2, division(10,5));
  TEST_ASSERT_EQUAL(2, division(12,6));
}

void test_s_root(void) {
  TEST_ASSERT_EQUAL(2, square_root(6, 2));
  TEST_ASSERT_EQUAL(2, square_root(8,3));
  TEST_ASSERT_EQUAL(3, square_root(10,5));
  TEST_ASSERT_EQUAL(3, square_root(12,6));
}

void test_fact(void) {
  TEST_ASSERT_EQUAL(720, factorial(6, 2));
  TEST_ASSERT_EQUAL(40320, factorial(8,3));
  TEST_ASSERT_EQUAL(3628800, factorial(10,5));
  TEST_ASSERT_EQUAL(479001600, factorial(12,6));
}

void test_expo(void) {
  TEST_ASSERT_EQUAL(403.428, exponent(6, 2));
  TEST_ASSERT_EQUAL(2980.957, exponent(8,3));
  TEST_ASSERT_EQUAL(22026.465, exponent(10,5));
  TEST_ASSERT_EQUAL(162754.791, exponent(12,6));
}