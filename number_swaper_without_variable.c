#include<stdio.h>
int main ()
{
    int a ,b;
    printf("Enter your first number\n");
    scanf("%d" , &a);
    printf("Enter your second number\n");
    scanf("%d" , &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first number is %d\n" ,a);
    printf("second number is %d\n" ,b);
    return 0;
}