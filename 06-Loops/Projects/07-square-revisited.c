/*
   7. Rearrange the square3.c program so that the for loop
      initializes i, tests i, and increments i. Don’t re-
      write the program; in particular, don’t use any
      multiplications.
*/

#include <stdio.h>

int main(void)
{
    int n, square = 1, odd = 3;

    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t\t%d\n", i, square);

        square += odd;
        odd += 2;
    }

    return 0;
}