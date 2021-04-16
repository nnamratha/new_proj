/**
 * @file calculator_operations.h
 * @author namratha
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CALCULATOR_OPERATIONS_H
#define CALCULATOR_OPERATIONS_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct value{
    int val1;                        //variables used in calculator through structure
    int val2;
}value;


/**
*  adds the val1 and val2 and returns the result
* @param[in] val1
* @param[in] val2 
* @return Result of val1+ val2
*/
int addition(value *val);
/**
*  subtracts the val1 and val2 and returns the result
* @param[in] val1
* @param[in] val2 
* @return Result of val1 - val2
*/
int subtraction(value *val);
/**
*  multiply the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value1 * value2
*/
int multiplication(int *value1, int *value2);
/**
*  divide the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value1 / value2
*/
int division(int *value1, int *value2);  
/**
*  squareroot of the value1 and returns the result
* @param[in] value3

* @return Result of sqrt(value3) 
*/
int squareroot(int *value3);
/**
*  factorial of the value and returns the result
* @param[in] value

* @return Result of factorial(value) 
*/
int factorial(int *value);
/**
*  exponent of the value3 and returns the result
* @param[in] value3

* @return Result of exp(value3) 
*/
int exponent(int *value3);
/**
*  logarithm of the value3 and returns the result
* @param[in] value3

* @return Result of log(value3) 
*/
int logarithm(int *value3);
/**
*  power of  the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value1 ^ value2
*/
int power(int *value1, int *value2);
#endif  
