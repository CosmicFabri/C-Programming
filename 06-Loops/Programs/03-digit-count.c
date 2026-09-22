/*
   3. Computes the number of digits of a number entered
      by the user:

      Enter a nonnegative integer: 60
      The number has 2 digit(s).
*/

#include <stdio.h>

int main(void)
{
    int n, digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n != 0);

    printf("The number has %d digit(s)\n", digits);

    return 0;
}