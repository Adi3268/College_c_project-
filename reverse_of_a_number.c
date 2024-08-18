#include <stdio.h>

int reverseNumber(int originalNumber) {
    int reversedNumber = 0;
    int remainder;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        originalNumber /= 10;
    }

    return reversedNumber;
}

int main() {
    int originalNumber;
    int reversedNumber;

    printf("Enter a number: ");
    if (scanf("%d", &originalNumber) != 1) {
        printf("Error: Invalid input. Please enter an integer number.\n");
        return 1;
    }

    reversedNumber = reverseNumber(originalNumber);

    printf("Original number: %d\n", originalNumber);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}