/*
   10. Programming Project 9 in Chapter 5 asked you to write a
       program that determines which of two dates comes ear-
       lier on the calendar. Generalize the program so that
       the user may enter any number of dates. The user will
       enter 0/0/0 to indicate that no more dates will be en-
       tered:

       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0

       5/17/07 is the earliest date
*/

#include <stdio.h>

int main(void)
{
    int min_mm, min_dd, min_yy, mm, dd, yy;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    min_mm = mm;
    min_dd = dd;
    min_yy = yy;

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);

        if (mm == 0 && dd == 0 && yy == 0)
            break;

        if (yy < min_yy)
        {
            min_mm = mm;
            min_dd = dd;
            min_yy = yy;

            continue;
        }
        else if (yy > min_yy)
        {
            continue;
        }

        if (mm < min_mm)
        {
            min_mm = mm;
            min_dd = dd;
            min_yy = yy;

            continue;
        }
        else if (mm > min_mm)
        {
            continue;
        }

        if (dd < min_dd)
        {
            min_mm = mm;
            min_dd = dd;
            min_yy = yy;

            continue;
        }
        else if (dd > min_dd)
        {
            continue;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", min_mm, min_dd, min_yy);

    return 0;
}