#include "calculator_operations.h"
#include "stdio.h"
/**
 * @brief   FUNCTION DECLARATION OF ALL THE FUNCTIONS CALLED
 * 
 * @param find 
 * @return int 
 */
int addition(value *find){
   int final=find->val1 + find->val2;                     // addition of operands
   printf("%d\n",final);
   return final;
}
int subtraction(value *find){
    int final=find->val1 - find->val2;                   // subtraction of operands
    printf("%d\n",final);
    return final;
}
int multiplication(value *find){
    int final= find->val1 * find->val2;                  // multiplication of operands
    printf("%d\n",final);
    return final;
}
int division(value *find){
    int final= find->val1 / find->val2;                 // division of operands
    printf("%d\n",final);
    return final;
}
int square_root(value *find){
int final=sqrt(find->val1);                             // square root of the val1
printf("%d\n",final);
return final;
}

int factorial(value *find){
    int sum = 1;
    for (int a = 1; a <= find->val1; ++a)              // factorial of val1
    sum *= a;
    printf("%d\n",sum);
    return sum;
}

int exponent(value *find){
        float final = exp(find->val1);               // exponential of val1
        printf("%.3f\n",final);
        return final;
}