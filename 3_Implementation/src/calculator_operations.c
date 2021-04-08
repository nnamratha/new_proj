#include "calculator_operations.h"
#include "stdio.h"
#include "math.h"

int addition(value *find){
   int final=find->val1 + find->val2;
   printf("%d\n",final);
}
int subtraction(value *find){
    int final=find->val1  -find->val2;
    printf("%d\n",final);
}
int multiplication(value *find){
    int final= find->val1 * find->val2;
    printf("%d\n",final);
}
int division(value *find){
    int final= find->val1 / find->val2;
    printf("%d\n",final);
}
int squareroot(value *find){
int final=sqrt(find->val1);
printf("%d\n",final);
}

int factorial(value *find){
    
        int sum = 1;
    
        for (int a = 1; a <= find->val1; ++a)
                    sum *= a;
        
        printf("%d\n",sum);
}