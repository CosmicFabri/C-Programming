/*
   2. Write a program that computes the volume of a sphere with
      a 10-meter radius, using the formula v = 4/3πr3. Write the
      fraction 4/3 as 4.0f/3.0f.
*/

#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f / 3.0f

int main(void)
{
    int radius = 10;
    int power = radius * radius * radius;

    float volume = power * PI * FRACTION;

    printf("Volume (cubic meters): %.1f\n", volume);

    return 0;
}