/*
   13. Modify Programming Project 11 from Chapter 7 so that the program labels
       its output:

       Enter a first and last name: Lloyd Fosdick
       You entered the name: Fosdick, L.

       The program will need to store the last name (but not the first name)
       in an array of characters until it can be printed. You may assume that
       the last name is no more than 20 characters long.
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    char last_name[20];
    char fn_initial, ch;

    printf("Enter a first and last name: ");

    // Allowing spaces before
    // the first name
    scanf(" %c", &fn_initial);

    // Read the rest of the letters of the
    // first name, stopping at the first space
    while (getchar() != ' ')
        ;

    // Start reading the last
    // name, allowing spaces
    scanf(" %c", &last_name[i]);

    while (last_name[i] != '\n')
    {
        i++;
        last_name[i] = getchar();
    }

    i = 0;
    
    printf("You entered the name: ");
    while (last_name[i] != '\n')
    {
        printf("%c", last_name[i]);
        i++;
    }
    
    printf(", %c\n", fn_initial);

    return 0;
}