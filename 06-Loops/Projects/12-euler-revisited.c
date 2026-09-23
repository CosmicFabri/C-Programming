/*
   12. Modify Programming Project 11 so that the program continues
       adding terms until the current term becomes less than ε,
       where ε is a small (floating-point) number entered by the
       user.
*/

#include <stdio.h>

int main(void)
{
    float term, e = 1, denom = 1, n = 1;

    printf("Enter small term: ");
    scanf("%f", &term);

    printf("Approximation of e: ");

    while (term < (1 / denom))
    {
        denom *= n;
        e += (1 / denom);
        n++;
    }

    printf("%.8f\n", e);

    return 0;
}