#include<stdio.h>

int number_taker() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i; 
}

void perfect_number(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("Congratulations! %d is a perfect number.\n", num);
    } else {
        printf("Sorry, %d is not a perfect number.\n", num);
    }
}

int main() {
    char choice;
    do {
        int c;
        c = number_taker(); 
        perfect_number(c);
        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character
    } while (choice == 'y' || choice == 'Y');
    printf("Exiting...\n");
    return 0;
}
