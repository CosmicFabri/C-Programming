/*
   11. Write a program that takes a first name and last name entered by
       the user and displays the last name, a comma, and the first ini-
       tial, followed by a period:

       Enter a first and last name: Lloyd Fosdick
       Fosdick, L.

       The user’s input may contain extra spaces before the first name,
       between the first and last names, and after the last name.
*/

#include <stdio.h>

int main(void)
{
    char fn_initial, ch;

    printf("Enter a first and last name: ");

    // Allowing spaces before
    // the first name
    scanf(" %c", &fn_initial);

    // Read the rest of the letters of the
    // first name, stopping at the first space
    while (getchar() != ' ')
        ;
    
    // Allowing spaces between
    // the first and last name
    scanf(" %c", &ch);

    // Printing last name
    while (ch != '\n')
    {
        if (ch == ' ')
            continue;

        putchar(ch);
        ch = getchar();
    }

    // Printing first name initial
    printf(", %c.\n", fn_initial);

    return 0;
}