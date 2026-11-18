/*
   18. Write a recursive version of the gcd function (see Exercise 3). Here’s
       the strategy to use for computing gcd(m, n): If n is 0, return m. O-
       therwise, call gcd recursively, passing n as the first argument and m
       % n as the second.
*/

#include <stdio.h>

int gcd(int m, int n)
{
    if (n == 0)
        return m;

    return gcd(n, m % n);
}

int main(void)
{
    printf("GCD of 4 and 5: %d\n", gcd(4, 5));
    printf("GCD of 12 and 16: %d\n", gcd(12, 16));
    printf("GCD of 6 and 9: %d\n", gcd(6, 9));

    return 0;
}