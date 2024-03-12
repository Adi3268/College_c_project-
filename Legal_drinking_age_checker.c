#include<stdio.h>
int main()
{ 
    int age ;
    char choice;
    do
    {
    
    
    printf("Enter your age :");
    scanf("%d" , &age);

    printf("Your age is %d \n " , age);
    if (age >=21 && age <= 70)
    {
        printf(" Congratulation!\n");
        printf("You can drink Alcohol legally.\n");
        printf("Save water drink beer.\n");

    }
    else if (age > 70)
    {
     printf("Uncle you can but its unhealthy for you.\n");
    }
    
    else
    {
        printf("Sorry bro , You can't drink yet\n");

    }
     printf("Do you want to check another age? (Y/N): ");
     scanf(" %c", &choice);

     
        
    } while (choice == 'Y' || choice == 'y');

    printf("Exiting the program. Goodbye!\n");
    return 0 ;
 
}