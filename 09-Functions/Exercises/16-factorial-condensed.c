/*
   16. Condense the fact function the same way we condensed power.
*/

#include <stdio.h>

int fact(int n)
{
    if (n == 2)
        return n;
    
    return n * fact(n - 1);
}

int main(void)
{
    int x = 3, y = 5, z = 4;

    printf("Factorial of %d: %d\n", x, fact(x));
    printf("Factorial of %d: %d\n", y, fact(y));
    printf("Factorial of %d: %d\n", z, fact(z));

    return 0;
}