/*
   7. Write a program that asks the user to enter a U.S. dollar
      amount and then shows how to pay that amount using the
      smallest number of $20, $10, $5, and $1 bills.
*/

#include <stdio.h>

int main(void)
{
    int amount, scores, tens, fives, units, remainder;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // Determine the truncated quotient and
    // the remainder based off each bill
    scores = amount / 20;
    remainder = amount % 20;

    tens = remainder / 10;
    remainder = amount % 10;

    fives = remainder / 5;
    remainder = amount % 5;

    units = remainder / 1;

    printf("$20 bills: %d\n", scores);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", units);

    return 0;
}