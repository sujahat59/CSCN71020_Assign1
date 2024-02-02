#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract(); // Declare the subtract function

void main() {
    printWelcomeMenu();
    printOptions();

    int inputNum;

    printf("Enter operation number: ");
    scanf_s("%d", &inputNum); // Change %1o to %d for reading integers

    switch (inputNum) {
    case 1:
        add();
        break;
    case 2:
        subtract(); // Call the subtract function for case 2
        break;
    default:
        printf("Invalid operation number\n");
        break;
    }
}

void printWelcomeMenu() {
    printf(" **********************\n");
    printf("**   Welcome to the   **\n");
    printf("**   BCS Calculator   **\n");
    printf(" **********************\n");
}

void printOptions() {
    printf("1. Add\n");
    printf("2. Subtract\n");
}

void add() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, result);
}
