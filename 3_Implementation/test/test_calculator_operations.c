#include "unity.h"
#include <calculator_operations.h>
#define PROJECT_NAME    "CALCULATOR"

/* random values being passed*/
value testcase={2,3},testcase1={-2,-1};
int val1=10,val2=5,val3=4;
int val4=-2,val5=-3,val6=-4;
int a1=3,a2=0;
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_divide_by_0(void);
void test_s_root(void);
void test_fact(void);
void test_fact_negative(void);
void test_fact_by_0(void);
void test_expo(void);
void test_loge(void);
void test_powe(void);





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
  RUN_TEST(test_fact_negative);
  RUN_TEST(test_fact_by_0);
  RUN_TEST(test_divide_by_0);
  RUN_TEST(test_loge);
  RUN_TEST(test_powe);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(5, addition(&testcase));
  TEST_ASSERT_EQUAL(-3, addition(&testcase1));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-1,subtraction(&testcase));
  TEST_ASSERT_EQUAL(-1, subtraction(&testcase1));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(50, multiplication(&val1,&val2));
  TEST_ASSERT_EQUAL(6, multiplication(&val4,&val5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(2, division(&val1,&val2));
  TEST_ASSERT_EQUAL(0, division(&val4,&val5));
}
void test_divide_by_0(void){
  TEST_ASSERT_EQUAL(-1, division(&a1,&a2));
}

void test_s_root(void) {
  TEST_ASSERT_EQUAL(2, squareroot(&val3));
}

void test_fact(void) {
  TEST_ASSERT_EQUAL(24, factorial(&val3));
}

void test_fact_negative(void) {
  TEST_ASSERT_EQUAL(-1, factorial(&val6));
}

void test_fact_by_0(void) {
  TEST_ASSERT_EQUAL(1, factorial(&a2));
}

void test_expo(void) {
  TEST_ASSERT_EQUAL(54.598, exponent(&val3));
  TEST_ASSERT_EQUAL(0.018, exponent(&val6));
}

void test_loge(void) {
  TEST_ASSERT_EQUAL(1.386, logarithm(&val3));
}

void test_powe(void) {
  TEST_ASSERT_EQUAL(100000, power(&val1,&val2));
}
