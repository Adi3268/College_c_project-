#include<stdio.h>
#include<ctype.h>

int main ()
{  char choice;
   int num1;
   int num2;
   char choice2;
  do
  {
    /* code */
  
   printf("Enter your first Number :");
   scanf("%d" , &num1);
   printf("Enter your second Number :");
   scanf("%d" , &num2);
   printf("ENTER YOUR CHOICE :ONLY +,-,*,/:");
   scanf(" %c", &choice);
   switch (choice)
   {
   case '+':
    
    printf("Result of your Problem %d\n"  ,num1+num2);
    break;
   case '-':
    
    printf("Result of your problem %d\n"   ,num1-num2);
    break;
   case '/' :
    
    printf("Result of your problem %d\n" , num1/num2);
    break;
   case '*':
   
   printf("Result of your problem %d\n" , num1*num2);
   break;   
   default:
   printf("Invalid choice sorry.");
    break;
   }
   printf("Do you want to solve another problem? : [Y/n] :");
   scanf(" %c" , &choice2);
   } while (choice2 =='y' || choice2 == 'Y'  );
   printf("exiting......");
    return 0 ;
}


