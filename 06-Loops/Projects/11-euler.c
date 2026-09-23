/*
   11. The value of the mathematical constant e can be expressed
       as an infinite series:

       e = 1 + 1/1! + 1/2! + 1/3! + ...

       Write a program that approximates e by computing the value of

       1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

       where n is an integer entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int n, i = 1;
    float e = 1, denom = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Approximation of e using n: ");

    while (i <= n)
    {
        denom *= i;

        e += (1 / denom);
        i++;
    }

    printf("%.8f\n", e);

    return 0;
}