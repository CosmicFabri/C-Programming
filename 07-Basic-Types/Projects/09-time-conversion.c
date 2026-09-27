/*
   9. Write a program that asks the user for a 12-hour time, then dis-
      plays the time in 24-hour form:

      Enter a 12-hour time: 9:11 PM
      Equivalent 24-hour time: 21:11

      See Programming Project 8 for a description of the input format.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int hh, mm;
   char ch1, ch2;

   printf("Enter a 12-hour time: ");
   scanf("%2d:%2d %c%c", &hh, &mm, &ch1, &ch2);

   // Replacing newline if user pressed enter
   if (ch2 == '\n')
      ch2 = ' ';

   // Normalizing to uppercase
   ch1 = toupper(ch1);
   ch2 = toupper(ch2);

   printf("Equivalent 24-hour time: ");

   // 12:00 AM - 00:00
   if (hh == 12 && ch1 == 'A')
      printf("00:%.2d\n", mm);

   // < 12:00 PM
   else if (hh < 12 && ch1 == 'A')
      printf("%.2d:%.2d\n", hh, mm);

   // 12:00 PM
   else if (hh == 12 && ch1 == 'P')
      printf("12:%.2d\n", mm);

   // > 12:00 PM
   else
      printf("%.2d:%.2d\n", hh + 12, mm);

   return 0;
}