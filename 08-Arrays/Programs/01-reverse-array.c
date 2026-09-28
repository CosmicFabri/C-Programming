/*
   1. Reverses a series of numbers.
*/

#include <stdio.h>

#define N 10

int main(void)
{
    int i, a[N];

    printf("Enter %d numbers: ", N);

    // reading into the array
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");

    // printing the reversed array
    for (i = N - 1; i >= 0; i--)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}