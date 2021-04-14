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
   printf(" Addition of %d + %d = %d\n",find->val1,find->val2,final);
   return final;
}
int subtraction(value *find){
   int final=(find->val1)-(find->val2);                     // subtraction of operands
   printf("subtraction of %d - %d = %d\n",find->val1,find->val2,final);
   return final;
}

int multiplication(int *value1,int *value2){
   int final= (*value1)*(*value2);                         // multiplication of operands
    printf(" multiplication = %d\n",final);
    return final;
}

int division(int *value1,int *value2){
    if(*value2==0){
        printf("divisor can;t be zero");                 // division when any one of the operand is 0
        return -1;
    }

   int final= (*value1)/(*value2);                  
    printf(" quotient = %d\n",final);
    printf(" remainder = %d\n",(*value1)%(*value2));     // division of 2 operands
    return final;
}
int squareroot(int *value3){
   int final= sqrt(*value3);               
    printf(" squareroot %d = %d\n",*value3,final);
    return final;
}
int factorial(int *value3){
  if(*value3 < 0)
    {printf("factorial for negative numbers not possible\n");          // factorial of the operand
      return -1;}
  if(*value3 == 0)
   { return 1;}
   int fact=1;
    for (int i = 1; i <= *value3;i++) {
            fact *= i;
        }
 printf("%d! = %d\n",*value3,fact);
 return fact;
}

int exponent(int *value3){
   float final= exp(*value3);               
    printf(" exponent = %.3f\n",final);                                // exponent of operand
    return final;
}

int logarithm(int *value3){
   float final= log(*value3);               
    printf(" logarithm = %.3f\n",final);                                // logarithm of operand
    return final;
}

int power(int *value1,int *value2){
   int final= pow(*value1,*value2);               
    printf(" power = %d\n",final);                                // power of operand
    return final;
}
