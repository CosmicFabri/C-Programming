/*
   Condense the d-weight.c program by:

   a) Replacing the assignments to height, length
      and width with initializers.

   b) Removing the weight variable, instead obtaining
      the d-weight value with an expression.
*/

#include <stdio.h>

int dimensional_weight(int volume);

int main(void)
{
    // Dimensions declaration and initialization
    int height = 12, length = 10, width = 8;

    int volume = height * length * width;
    int d_weight = dimensional_weight(volume);

    printf("Dimensions: %d\" x %d\" x %d\"\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", d_weight);

    return 0;
}

int dimensional_weight(int volume)
{
    // Sum 165 to the volume beforehand
    // to bypass the integer truncation
    return (volume + 165) / 166;
}