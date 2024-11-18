#include <stdio.h>

int main(void){
    char operator, choice;
    double operand1, operand2;

    do {
        printf("Enter operator (+, -, *, /): ");

        scanf(" %c", &operator);

        printf("Enter operands (numbers): ");

        scanf("%lf %lf", &operand1, &operand2);

        switch (operator){
        case '+':
            printf("%f + %f = %f\n",
                operand1,
                operand2,
                operand1 + operand2);
            break;

        case '-':
            printf("%f - %f = %f\n",
                operand1,
                operand2,
                operand1 - operand2);
            break;

        case '*':
            printf("%f * %f = %f\n",
                operand1,
                operand2,
                operand1 * operand2);
            break;

        case '/':
            if (operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            } else { 
            printf("%f / %f = %f\n",
                operand1,
                operand2,
                operand1 / operand2);
            }
            break;

        default:
            printf("Invalid operator entered.\n");
        } 
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}