/*
   3. Write a program that asks the user to enter a fraction,
      then reduces the fraction to lowest terms:

      Enter a fraction: 6/12
      In lowest terms: 1/2

      Hint: To reduce a fraction to lowest terms, first com-
      pute the GCD of the numerator and denominator. Then di-
      vide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void)
{
    int num, denom, n, m, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    n = num; m = denom;

    while (n > 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    printf("In lowest terms: %d/%d\n", num / m, denom / m);

    return 0;
}