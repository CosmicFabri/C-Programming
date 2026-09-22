/*
   5. Show how to replace a continue statement by an
       equivalent goto statement.
*/

#include <stdio.h>

int main(void)
{
    int n, sum = 0, count = 0;

    printf("Enter 5 positive integer numbers: ");

    while (count < 5)
    {
        scanf("%d", &n);
        sum += n;

        if (n == 0)
            goto end;
        
        count++;

        end: ;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}