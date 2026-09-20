/*
   11. Write a switch statement whose controlling expression is the
       variable area_code. If the value of area_code is in the table,
       the switch statement will print the corresponding city name.
       Otherwise, the switch statement will display the message "Area
       code not recognized". Make the switch statement as simple as
       possible.
*/

#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Enter the area code: ");
    scanf("%3d", &area_code);

    printf("Major city: ");

    switch (area_code)
    {
    case 229:
        printf("Albany\n");
        break;

    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta\n");
        break;
    
    case 478:
        printf("Macon\n");
        break;

    case 706:
    case 762:
        printf("Columbus\n");
        break;

    case 912:
        printf("Savannah\n");
        break;
    
    default:
        printf("Area code not recognized\n");
        break;
    }

    return 0;
}