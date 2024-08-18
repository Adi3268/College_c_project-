#include<stdio.h>
#include<math.h>
414

int main() {
    int a;
    char choice;

    do {
        printf("Enter your score (0-100):\n");
        scanf("%d", &a);
        printf("Your Score is %d\n", a);

        if (a > 90) {
            printf("Congratulations! A\n");
        } else if (a > 80) {
            printf("B\n");
        } else if (a > 70) {
            printf("C\n");
        } else if (a > 60) {
            printf("D\n");
        } else if (a > 50) {
            printf("E\n");
        } else {
            printf("Fail\n");
        }

        printf("Do you want to check another score (Y/N): ");
        scanf(" %c", &choice); 

    } while (choice == 'Y' || choice == 'y');

    printf("Exiting...\n");

    return 0;
}
