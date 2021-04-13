/**
 * @file main.c
 * @author namratha
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"calculator_operations.h"

value compute={6,3};
int option = 0;
int n = 1;
void sel_opt(void);
int val1=6;
int val2=2;
int val3=4;
/**
 * @brief GIVING THE OPERATIONS RESPECTIVE VALUES TO FUNTION ITS OPERATION
 * 
 */
enum operations{ add=1, sub, mul, divi,s_root,fact,expo,loge,leave};
int main(){
        printf("\nWELCOME\n");            // WELCOME MESSAGE

while(n==1){
  sel_opt();
}
if(n!=1){
    printf("Thankyou ....!!");
}
  
    }
    /**
     * @brief enter the option based on the calculation
     * 
     */
  void sel_opt(){

      printf("Operations\n");
      printf("\n1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Squareroot\n6.Factorial\n7.Exponent\n8.Logarithm\n9.LEAVE\n");
      printf("Enter ur option\n");
      scanf("%d",&option);

      switch(option){
          case add:
          addition(&compute);
          break;

          case sub:
          subtraction(&compute);
          break;

          case mul:
          multiplication(&val1,&val2);
          break;

          case divi:
          division(&val1,&val2);
          break;

          case s_root:
          squareroot(&val3);
          break;

          case fact:
          factorial(&val3);
          break;

          case expo:
          exponent(&val3);
          break;

          case loge:
          logarithm(&val3);
          break;

          case leave:
          exit(0);
          break;

          default:
          printf("WRONG OPERATION\n");
          
      }
      printf("enter 1 to continue\n");
    scanf("%d",&n);
 }    
   