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

int addition(value *find);
int subtraction(value *find);
int multiplication(value *find);
int division(value *find);
int squareroot(value *find);
int factorial(value *find);
int exponent(value *find);
#endif  