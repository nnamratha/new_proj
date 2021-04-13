/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-11
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
enum operations{ add=1, sub, mul, divi,s_root,fact,expo,leave};
int main(){
        printf("\nWELCOME\n");            // WELCOME MESSAGE

while(n==1){
  sel_opt();
}
if(n!=1){
    printf("TThankyou ....!!");
}
  
    }
    /**
     * @brief enter the option based on the calculation
     * 
     */
  void sel_opt(){

      printf("Operations\n");
      printf("\n1.add\n2.sub\n3.mul\n4.div\n5.sqroot\n6.factorial\n7.exponent\n");
      printf("enter ur option\n");
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

          case leave:
          exit(0);
          break;

          default:
          printf("WRONG OPERATION\n");
          
      }
      printf("enter 1 to continue\n");
    scanf("%d",&n);
 }    
   