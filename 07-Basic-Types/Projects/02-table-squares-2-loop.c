/*
   2. Modify the square2.c program of Section 6.3 so that it pauses
      after every 24 squares and displays the following message:

      Press Enter to continue...

      After displaying the message, the program should use getchar
      to read a character. getchar won’t allow the program to con-
      tinue until the user presses the Enter key.
*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // Clean the buffer as we entered a newline
    // character when entering the number of entries
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t%d\n", i, i * i);

        if (i % 24 == 0)
        {
            printf("Press Enter to continue... ");

            while (getchar() != '\n')
                ;

            printf("\n");
        }
    }

    return 0;
}