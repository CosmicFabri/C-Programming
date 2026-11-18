/*
   4. Write a function day_of_year(month, day, year) that returns the day of the
      year (an integer between 1 and 366) specified by the three arguments.
*/

#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = 0, i;

    for (i = 1; i < month; i++)
        day_count += num_days[i - 1];

    /* adjust for leap years, assuming they are divisible by 4 */
    if (year % 4 == 0 && month > 2)
        day_count++;

    return day_count + day;
}

int main(void)
{
    int month, day, year;

    printf("Enter a month, day and year: ");
    scanf("%d%d%d", &month, &day, &year);

    printf("The day of year is: %d\n", day_of_year(month, day, year));

    return 0;
}