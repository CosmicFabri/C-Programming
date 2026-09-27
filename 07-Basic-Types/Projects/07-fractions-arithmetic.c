/*
   7. Modify Programming Project 6 from Chapter 3 so that the user
      may add, subtract, multiply, or divide two fractions (by en-
      tering either +, -, *, or / between the fractions).
*/

#include <stdio.h>

int main(void)
{
    char sign;
    int num1, num2, denom1, denom2,
        result_num, result_denom;

    printf("Enter two fractions separated by an arithmetic sign: ");

    scanf("%d / %d", &num1, &denom1);
    scanf(" %c", &sign);
    scanf("%d / %d", &num2, &denom2);

    printf("The result is ");

    switch (sign)
    {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("%d / %d\n", result_num, result_denom);
        break;

    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("%d / %d\n", result_num, result_denom);
        break;

    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("%d / %d\n", result_num, result_denom);
        break;

    case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("%d / %d\n", result_num, result_denom);
        break;

    default:
        printf("[Invalid operation sign]\n");
        break;
    }

    return 0;
}