/*
   11. Write a program that asks the user for a two-digit number,
       then prints the English word for the number:
       
       Enter a two-digit number: 45
       You entered the number forty-five.

       Don’t forget that the numbers between 11 and 19 require
       special treatment.
*/

#include <stdio.h>

int main(void)
{
    int tens, units;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &units);

    printf("You entered the number ");

    // Handle the 1x case
    if (tens == 1) {
        if (units == 1) {
            printf("eleven\n");
        } else if (units == 2) {
            printf("twelve\n");
        } else if (units == 3) {
            printf("thirteen\n");
        } else if (units == 4) {
            printf("fourteen\n");
        } else if (units == 5) {
            printf("fifteen\n");
        } else if (units == 6) {
            printf("sixteen\n");
        } else if (units == 7) {
            printf("seventeen\n");
        } else if (units == 8) {
            printf("eighteen\n");
        } else if (units == 9) {
            printf("nineteen\n");
        } else {
            printf("ten\n");
        }

        return 0;
    }

    // Handling the tens
    switch (tens)
    {
    case 2:
        printf("twenty-");
        break;
    
    case 3:
        printf("thirty-");
        break;

    case 4:
        printf("forty-");
        break;
    
    case 5:
        printf("fifty-");
        break;
    
    case 6:
        printf("sixty-");
        break;
    
    case 7:
        printf("seventy-");
        break;
    
    case 8:
        printf("eighty-");
        break;

    case 9:
        printf("ninety-");
        break;
    
    default:
        break;
    }

    // Handling the units
    switch (units)
    {
    case 1:
        printf("one\n");
        break;

    case 2:
        printf("two\n");
        break;

    case 3:
        printf("three\n");
        break;

    case 4:
        printf("four\n");
        break;
    
    case 5:
        printf("five\n");
        break;

    case 6:
        printf("six\n");
        break;

    case 7:
        printf("seven\n");
        break;

    case 8:
        printf("eight\n");
        break;

    case 9:
        printf("nine\n");
        break;
    
    case 0:
        printf("zero\n");
        break;
    
    default:
        break;
    }

    return 0;
}