/*
   2. Computes the length of a message entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int ch, len = 0;

    printf("Enter a message: ");
    ch = getchar();

    while (ch != '\n')
    {
        len++;
        ch = getchar();
    }

    printf("Your message was %d character(s) long.\n", len);

    return 0;
}