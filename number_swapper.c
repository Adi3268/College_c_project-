#include<stdio.h>

int main() {
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Your first number is %d\n", a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Your second number is %d\n", b);

    
    temp = a;
    a = b;
    b = temp;

    
    printf("Your first number after swapping is %d\n", a);  
    printf("Your second number after swapping is %d\n", b); 

    return 0;
}
