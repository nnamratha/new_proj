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
 * @brief Operations involved in this calculator
 * 
 * @param find 
 * @return int 
 */

int addition(value *val);
int subtraction(value *val);
int multiplication(int *value1, int *value2);
int division(int *value1, int *value2);           // variables passed through pointers
int squareroot(int *value3);
int factorial(int *value);
int exponent(int *value3);
int logarithm(int *value3);
int power(int *value1, int *value2);
#endif  
