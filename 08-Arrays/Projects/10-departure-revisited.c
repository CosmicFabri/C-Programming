/*
   10. Modify Programming Project 8 from Chapter 5 so that the departure times
       are stored in an array and the arrival times are stored in a second ar-
       ray. (The times are integers, representing the number of minutes since
       midnight.) The program will use a loop to search the array of departure
       times for the one closest to the time entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Departure and arrival times, minutes since midnight
    int departures[4] = {840, 945, 1140, 1305};
    int departure_diffs[4];

    int hh, mm, time, min_diff, min_index = 0;

    printf("Enter a 24-hour time: ");
    scanf("%2d%2d", &hh, &mm);

    // Entered time in minutes
    time = hh * 60 + mm;

    // Storing the entered and departure time diffs
    for (int i = 0; i < 4; i++)
        departure_diffs[i] = abs(time - departures[i]);

    min_diff = departure_diffs[0];

    // Computing the min diff index
    for (int i = 1; i <= 3; i++)
    {
        if (departure_diffs[i] < min_diff) 
        {
            departure_diffs[i] = min_diff;
            min_index = i;
        }
    }
    
    int closest_hh = departures[min_index] / 60;
    int closest_mm = departures[min_index] % 60;

    printf("Closest departure time is ");

    if (closest_hh == 0)
        printf("12:%.2d a.m.\n", closest_mm);
    else if (closest_hh < 12)
        printf("%d:%.2d a.m.\n", closest_hh, closest_mm);
    else if (closest_hh == 12)
        printf("12:%.d p.m.\n", closest_mm);
    else
        printf("%d:%.2d p.m.\n", closest_hh - 12, closest_mm);

    return 0;
}