/*
   8. Write a program that asks user to enter a time (expressed
      in hours and minutes, using the 24-hour clock). The
      program then displays the departure and arrival times for
      the flight whose departure time is closest to that
      entered by the user:

      Enter a 24-hour time: 13:15
      Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
*/

#include <stdio.h>

int main(void)
{
    int hours, minutes, total_minutes,
        time_1, time_2, closest_time,
        computed_1, computed_2,
        closest_hours, closest_minutes;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    total_minutes = hours * 60 + minutes;

    // 2:00 PM
    if (total_minutes <= 840)
    {
        time_1 = 840;
        time_2 = 1305;
        // 3:45 PM
    }
    else if (total_minutes <= 945)
    {
        time_1 = 840;
        time_2 = 945;
        // 7:00 PM
    }
    else if (total_minutes <= 1140)
    {
        time_1 = 945;
        time_2 = 1140;
        // 9:45 PM
    }
    else
    {
        time_1 = 1140;
        time_2 = 1305;
    }

    // Computing the closest time
    computed_1 = total_minutes - time_1;
    computed_2 = time_2 - total_minutes;
    closest_time = computed_1 < computed_2 ? time_1 : time_2;

    // Computing the final hours and minutes
    closest_hours = closest_time / 60;
    closest_minutes = closest_time % 60;

    printf("Closest departure time is ");

    if (closest_hours == 0)
        printf("12:%.2d a.m.\n", closest_minutes);
    else if (closest_hours < 12)
        printf("%d:%.2d a.m.\n", closest_hours, closest_minutes);
    else if (closest_hours == 12)
        printf("12:%.d p.m.\n", closest_minutes);
    else
        printf("%d:%.2d p.m.\n", closest_hours - 12, closest_minutes);

    return 0;
}