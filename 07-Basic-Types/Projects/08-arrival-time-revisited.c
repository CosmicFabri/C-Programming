/*
   8. Modify Programming Project 8 from Chapter 5 so that the user
      enters a time using the 12-hour clock. The input will have
      the form hours:minutes followed by either A, P, AM, or PM
      (either lower-case or upper-case). White space is allowed
      (but not required) between the numerical time and the AM/PM
      indicator. Examples of valid input:

      1:15P
      1:15PM
      1:15p
      1:15pm
      1:15 P
      1:15 PM
      1:15 p
      1:15 pm

      You may assume that the input has one of these forms; there
      is no need to test for errors.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes, total_minutes,
        closest_1, closest_2, closest_time,
        computed_diff_1, computed_diff_2,
        closest_hours, closest_minutes;

    char time_ch1, time_ch2;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d %c%c",
          &hours, &minutes,
          &time_ch1, &time_ch2);

    if (time_ch2 == '\n')
        time_ch2 = ' ';

    time_ch1 = toupper(time_ch1);
    time_ch2 = toupper(time_ch2);

    // Computing time entered
    if (time_ch1 == 'A' && hours == 12)
        total_minutes = minutes;
    else if (time_ch1 == 'A')
        total_minutes = hours * 60 + minutes;
    else if (time_ch1 == 'P' && hours == 12)
        total_minutes = 720 + minutes;
    else
        total_minutes = 720 + hours * 60 + minutes;

    // Computing the two closest times
    if (total_minutes <= 840 && total_minutes > 352)
    {
        closest_1 = 840; // 2:00 PM
        closest_2 = 1305; // 9:45 PM
    }
    else if (total_minutes <= 352)
    {
        closest_1 = 1305; // 9:45 PM
        closest_2 = 840; // 2:00 PM
    }
    else if (total_minutes <= 945)
    {
        closest_1 = 840; // 2:00 PM
        closest_2 = 945; // 3:45 PM
    }
    else if (total_minutes <= 1140)
    {
        closest_1 = 945; // 3:45 PM
        closest_2 = 1140; // 7:00 PM
    }
    else
    {
        closest_1 = 1140; // 7:00 PM
        closest_2 = 1305; // 9:45 PM
    }

    // Computing the closest time
    computed_diff_1 = total_minutes - closest_1;
    computed_diff_2 = closest_2 - total_minutes;
    closest_time = computed_diff_1 < computed_diff_2 ? closest_1 : closest_2;

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