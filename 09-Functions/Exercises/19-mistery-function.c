/*
   19. Consider the following “mystery” function. Trace the execution of the
       function by hand. Then write a program that calls the function, pas-
       sing it a number entered by the user. What does the function do?
*/

#include <stdio.h>

// Prints a number in binary
void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    printf("4 in binary: ");
    pb(4);
    printf("\n");

    printf("8 in binary: ");
    pb(8);
    printf("\n");

    printf("12 in binary: ");
    pb(12);
    printf("\n");

    return 0;
}