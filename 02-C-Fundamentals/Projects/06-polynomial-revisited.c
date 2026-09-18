/*
   6. Modify the program of Programming Project 5 so that the
      polynomial is evaluated using the following formula:
    
      ((((3x + 2)x – 5)x – 1)x + 7)x – 6

      Note that the modified program performs fewer multiplications.
      This technique for evaluating polynomials is known as Horner’s Rule.
*/

#include <stdio.h>

int main(void)
{
    int value;

    printf("Enter the value: ");
    scanf("%d", &value);

    int expression_1 = (3 * value) + 2;
    int expression_2 = (expression_1 * value) - 5;
    int expression_3 = (expression_2 * value) - 1;
    int expression_4 = (expression_3 * value) + 7;
    int result = (expression_4 * value) - 6;

    printf("Polynomial: %d\n", result);

    return 0;
}