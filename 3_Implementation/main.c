#include"calculator_operations.h"
int main(){
    value compute;
    compute.val1=6;
    compute.val2=2;
    addition(&compute);
    subtraction(&compute);
    multiplication(&compute);
    division(&compute);
    squareroot(&compute);
    factorial(&compute);
    
    return 0;
}