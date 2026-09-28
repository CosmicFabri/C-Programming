/*
   9. Using the array of Exercise 8, write a program fragment that computes
      the average temperature for a month (averaged over all days of the
      month and all hours of the day).
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MONTH_DAYS 30
#define DAY_HOURS 24

int main(void)
{
   // Setting the random number gen. seed
   srand(time(NULL));

   // Hourly temperature readings through a month
   float readings[MONTH_DAYS][DAY_HOURS];
   float avg_temperature = 0;

   for (int i = 0; i < MONTH_DAYS; i++)
   {
      for (int j = 0; j < DAY_HOURS; j++)
      {
         readings[i][j] = rand() % 30;
         avg_temperature += readings[i][j];
      }
   }

   avg_temperature /= (MONTH_DAYS * DAY_HOURS);
   
   printf("Average temperature: %.2f\n", avg_temperature);

   return 0;
}