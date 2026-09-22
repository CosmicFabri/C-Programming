/*
   13. Rewrite the following loop so that its body is empty:

   for (n = 0; m > 0; n++)
     m /= 2;
*/

#include <stdio.h>

int main(void)
{
    int n, m;

    printf("Enter a positive integer: ");
    scanf("%d", &m);

    for (n = 0; m > 0; n++, m /= 2);

    printf("Number of iterations: %d\n", n);

    return 0;
}