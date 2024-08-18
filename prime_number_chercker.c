#include<stdio.h>
#include<math.h>

int main(void) {
    unsigned long long int a, i;
    printf("Welcome!\n");
    printf("Enter your number: ");
    scanf("%llu", &a);
    printf("The number is %llu\n", a);

    if (a < 2) {
        printf("Prime number is not applicable for numbers less than 2.\n");
        return 0;
    }

    for (i = 2; i * i <= a/2; i++) {
        if (a % i == 0) {
            printf("Sorry! %llu is not a prime number.\n", a);
            return 0; 
        }
    }

    printf("Congratulations! %llu is a prime number.\n", a);

    return 0;
}
