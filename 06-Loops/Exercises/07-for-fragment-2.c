/*
   7. Translate the program fragment of Exercise 2 into a single for statement.
*/

#include <stdio.h>

int main(void)
{
    for (int i = 9384; ; i /= 10) {
        printf("%d ", i);

        if (i <= 0)
            break;
    }

    printf("\n");

    return 0;
}