/*
   6. Write a function digit(n, k) that returns the kth digit (from the right)
      in n (a positive integer). For example, digit(829, 1) returns 9,
      digit(829, 2) returns 2, and digit(829, 3) returns 8. If k is greater
      than the number of digits in n, have the function return 0.
*/

#include <stdio.h>

int digit(int n, int k)
{
    for (int i = 1; i < k; i++)
        n /= 10;

    return n % 10;
}

int main(void)
{
    printf("%d\n", digit(123, 1));
    printf("%d\n", digit(123, 2));
    printf("%d\n", digit(123, 3));
    printf("%d\n", digit(123, 4));

    return 0;
}