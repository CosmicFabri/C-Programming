/*
  Prints the dimensional weight of a 12" x 10" x 8" box

  In the US, the total volume (cubic inches) of a shipping box
  has to be calculated a dimensional weight (pounds / cubic
  inches) by dividing it by a standard divisor (166 for inter-
  national shipping). If the dimensional weight exceeds the
  actual weight of the box, the shipping fee is calculated
  based off the dimensional weight.
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