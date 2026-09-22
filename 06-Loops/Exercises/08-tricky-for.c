/*
   8. What output does the following for statement produce?
*/

#include <stdio.h>

int main(void)
{
    int i, count = 0;

    // 10 5 3 2 1 1 1 1 ...
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    return 0;
}