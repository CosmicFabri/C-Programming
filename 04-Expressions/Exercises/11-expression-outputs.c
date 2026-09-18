/*
   11. Show the output produced by each of the following program fragments.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j); // 6 16

    // (b)
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j); // 4 11 6

    // (c)
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j); // 0 8 7

    // (d)
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k); // 3 4 5 4

    return 0;
}