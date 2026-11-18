/*
   5. Write a function num_digits(n) that returns the number of digits in n (a
      positive integer).
*/

#include <stdio.h>

int num_digits(int n)
{
    int digits = 0;

    while (n > 0)
    {
        digits += 1;
        n /= 10;
    }

    return digits;
}

int main(void)
{
    printf("Num digits of 123: %d\n", num_digits(123));
    printf("Num digits of 12: %d\n", num_digits(12));
    printf("Num digits of 1: %d\n", num_digits(1));

    return 0;
}