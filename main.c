#include <stdio.h>

int main(void){
    char operator;
    double operand1, operand2;

    printf("Enter operator (+, -, *, /): ");

    scanf("%c", &operator);

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
        printf("%f / %f = %f\n",
            operand1,
            operand2,
            operand1 / operand2);
        break;
    
    default:
        printf("Invalid operator entered.\n");
    }

    return 0;
}