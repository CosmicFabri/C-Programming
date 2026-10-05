/*
   3. Modify the repdigit.c program of Section 8.1 so that the user can
      enter more than one number to be tested for repeated digits. The
      program should terminate when the user enters a number that’s
      less than or equal to 0.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int number, d;
    bool digit_seen[10] = {false};

    printf("Enter a number (0 to terminate): ");
    scanf("%d", &number);

    while (number > 0)
    {
        for (; number > 0; number /= 10)
        {
            d = number % 10;

            if (digit_seen[d])
                break;

            digit_seen[d] = true;
        }

        if (number > 0)
            printf("\nRepeated digits");
        else
            printf("\nNo repeated digits");

        // Clearing the array
        for (int i = 0; i < 10; i++)
            digit_seen[i] = false;

        scanf("%d", &number);
    }

    printf("\n");

    return 0;
}