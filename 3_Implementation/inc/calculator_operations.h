/**
 * @file calculator_operations.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-11
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
    int val1;                        //variables used in calculator
    int val2;
}value;

/**
 * @brief operations involved in this calculator
 * 
 * @param find 
 * @return int 
 */
// int *value1,*value2,*value3;
int addition(value *val);
int subtraction(value *val);
int multiplication(int *value1, int *value2);
int division(int *value1, int *value2);
int squareroot(int *value3);
int factorial(int *value);
int exponent(int *value3);
#endif  