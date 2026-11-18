/*
   17. Rewrite the fact function so that it’s no longer recursive.
*/

#include <stdio.h>

int fact(int n)
{
    int result = 1, i = n;

    while (i > 1)
    {
        result *= i;
        i--;
    }

    return result;
}

int main(void)
{
    int x = 3, y = 5, z = 4;

    printf("Factorial of %d: %d\n", x, fact(x));
    printf("Factorial of %d: %d\n", y, fact(y));
    printf("Factorial of %d: %d\n", z, fact(z));

    return 0;
}