/*
   3. Write a function gcd(m, n) that calculates the greatest common divisor
      of the integers m and n. (Programming Project 2 in Chapter 6 describes
      Euclid’s algorithm for computing the GCD.)
*/

#include <stdio.h>

int gcd(int m, int n)
{
    int dividend = m;
    int divisor = n;
    int remainder = dividend % divisor;

    while (remainder != 0)
    {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }

    return divisor;
}

int main(void)
{
    int m = 12, n = 6;

    printf("GCD of %d and %d: %d\n", m, n, gcd(m, n));

    return 0;
}