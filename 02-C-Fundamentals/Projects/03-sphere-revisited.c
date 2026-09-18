/*
   3. Modify the program of Programming Project 2 so that
      it prompts the user to enter the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f / 3.0f

int main(void)
{
    float radius, power;

    printf("Enter the radius (meters): ");
    scanf("%f", &radius);

    power = radius * radius * radius;

    float volume = power * PI * FRACTION;

    printf("Volume: %.1f\n", volume);

    return 0;
}