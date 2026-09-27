/*
   15. Write a program that computes the factorial of a positive integer:

       Enter a positive integer: 6
       Factorial of 6: 720
*/

#include <stdio.h>

int main(void)
{
    int n, i, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    i = n;

    while (i > 0)
    {
        factorial *= i;
        i--;
    }

    printf("Factorial of %d: %d\n", n, factorial);

    return 0;
}