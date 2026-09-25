/*
   2. Computes the length of a message entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");

    // Shortened the while loop
    // by using a C idiom
    while (getchar() != '\n')
        len++;

    printf("Your message was %d character(s) long.\n", len);

    return 0;
}