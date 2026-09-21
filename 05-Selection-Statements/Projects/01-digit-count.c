/*
   1. Write a program that calculates how many digits a number contains:

      Enter a number: 374
      The number 374 has 3 digits
      
      You may assume that the number has no more than four digits.
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number %d has ", number);

    if (number >= 0 && number <= 9)
        printf("1 digit\n");
    else if (number >= 10 && number <= 99)
        printf("2 digits\n");
    else if (number >= 100 && number <= 999)
        printf("3 digits\n");
    else
        printf("4 digits\n");

    return 0;
}