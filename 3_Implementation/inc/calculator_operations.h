
#ifndef valueCULATOR_OPERATIONS_H
#define valueCULATOR_OPERATIONS_H

typedef struct value{
    int val1;
    int val2;
}value;
#endif  

int addition(value *find);
int subtraction(value *find);
int multiplication(value *find);
int division(value *find);
int squareroot(value *find);
int factorial(value *find);