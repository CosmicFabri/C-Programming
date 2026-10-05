/*
   11. Modify Programming Project 4 from Chapter 7 so that the program labels
       its output:

       Enter phone number: 1-800-COL-LECT
       In numeric form: 1-800-265-5328

       The program will need to store the phone number (either in its origi-
       nal form or in its numeric form) in an array of characters until it
       can be printed. You may assume that the phone number is no more than
       15 characters long.
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    char phone_number[15];

    printf("Enter phone number: ");
    scanf("%c", &phone_number[i]);

    // Reading phone digits into array
    while (phone_number[i] != '\n')
    {
        i++;
        scanf("%c", &phone_number[i]);
    }

    i = 0;

    printf("In numeric form: ");
    while (phone_number[i] != '\n')
    {
        int ch = phone_number[i];
        
        switch (ch)
        {
        case 'A':
        case 'B':
        case 'C':
            printf("2");
            break;

        case 'D':
        case 'E':
        case 'F':
            printf("3");
            break;

        case 'G':
        case 'H':
        case 'I':
            printf("4");
            break;

        case 'J':
        case 'K':
        case 'L':
            printf("5");
            break;

        case 'M':
        case 'N':
        case 'O':
            printf("6");
            break;

        case 'P':
        case 'R':
        case 'S':
            printf("7");
            break;

        case 'T':
        case 'U':
        case 'V':
            printf("8");
            break;

        case 'W':
        case 'X':
        case 'Y':
            printf("9");
            break;

        default:
            printf("%c", ch);
            break;
        }

        i++;
    }
    
    printf("\n");

    return 0;
}