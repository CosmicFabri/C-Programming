/*
   1. Modify the repdigit.c program of Section 8.1 so that it shows
      which digits (if any) were repeated:

      Enter a number: 939577
      Repeated digit(s): 7 9
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int n, d;
    bool digit_seen[10] = {false};

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Repeated digits: ");
    while (n > 0)
    {
        d = n % 10;

        if (digit_seen[d])
            printf("%d ", d);

        if (!digit_seen[d])
            digit_seen[d] = true;
        
        n /= 10;
    }

    printf("\n");

    return 0;
}