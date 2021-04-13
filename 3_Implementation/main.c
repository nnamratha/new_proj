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

value compute={6,2};
int option = 0;
static int n = 1;
void sel_opt(void);
/**
 * @brief GIVING THE OPERATIONS RESPECTIVE VALUES TO FUNTION ITS OPERATION
 * 
 */
enum operations{ add=1, sub, mul, divi,s_root,fact,expo,leave};
int main(){
        printf("\nWELCOME\n");            // WELCOME MESSAGE
if(n!=1){
    printf("THANK YOU!!");                // ENG MESSAGE
}
while(n==1){
  sel_opt();
}
    }
    /**
     * @brief enter the option based on the calculation
     * 
     */
  void sel_opt(){
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
          multiplication(&compute);
          break;

          case divi:
          division(&compute);
          break;

          case s_root:
          square_root(&compute);
          break;

          case fact:
          factorial(&compute);
          break;

          case expo:
          exponent(&compute);
          break;

          case leave:
          exit(0);
          break;

          default:
          printf("WRONG OPERATION\n");
          
      }
      printf("enter 1 to continue\n");
    scanf("%d",&option);
 }    
   