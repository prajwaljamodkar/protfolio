#include <stdio.h>

void sum(double num1, double num2) {
    printf("Result: %lf\n", num1 + num2);
}

void sub(double num1, double num2) {
    printf("Result: %lf\n", num1 - num2);
}

void multiplication(double num1, double num2) {
    printf("Result: %lf\n", num1 * num2);
}

void division(double num1, double num2) {
    if (num2 != 0) {
        printf("Result: %lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    char opperent;
    double num1, num2;

    printf("!!!!!! Welcome to the calculator !!!!!!\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Clear the input buffer before taking the operation character
    while ((getchar()) != '\n');

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf("%c", &opperent);

    switch (opperent) {
        case '+':
            sum(num1, num2);
            break;
        case '-':
            sub(num1, num2);
            break;
        case '*':
            multiplication(num1, num2);
            break;
        case '/':
            division(num1, num2);
            break;
        default:
            printf("Invalid operation: '%c'. Please use +, -, *, or /.\n", opperent);
            break;
    }

    printf("\nMade by PRAJWAL (prajwaljamodkar1111@gmail.com)\n");
    return 0;
}
