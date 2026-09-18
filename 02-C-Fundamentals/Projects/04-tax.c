/*
   4. Write a program that asks the user to enter a dollars-
   and-cents amount, then displays the amount with 5% tax added.
*/

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("Tax added amount: %.2f\n", amount * 1.05f);

    return 0;
}