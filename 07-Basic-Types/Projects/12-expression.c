/*
   12. Write a program that evaluates an expression:

       Enter an expression: 1+2.5*3
       Value of expression: 10.5

       The operands in the expression are floating-point numbers;
       the operators are +, -, *, and /. The expression is evalu-
       ated from left to right (no operator takes precedence over
       any other operator).
*/

#include <stdio.h>

int main(void)
{
    float left_operand, right_operand;
    char operator;

    printf("Enter an expression: ");
    scanf("%f %c %f", &left_operand, &operator, &right_operand);

    // Compute the value of the first (leftmost) operation
    switch (operator)
    {
    case '+':
        left_operand += right_operand;
        break;

    case '-':
        left_operand -= right_operand;
        break;

    case '*':
        left_operand *= right_operand;
        break;

    case '/':
        left_operand /= right_operand;
        break;

    default:
        break;
    }

    operator = getchar();

    // Compute the rest of the operations, if any
    while (operator != '\n')
    {
        scanf("%f", &right_operand);

        switch (operator)
        {
        case '+':
            left_operand += right_operand;
            break;

        case '-':
            left_operand -= right_operand;
            break;

        case '*':
            left_operand *= right_operand;
            break;

        case '/':
            left_operand /= right_operand;
            break;

        default:
            break;
        }

        operator = getchar();
    }

    printf("Value of expression: %.2f\n", left_operand);

    return 0;
}