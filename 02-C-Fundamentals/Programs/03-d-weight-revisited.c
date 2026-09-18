/* Computes the dimensional weight of a
   box from input provided by the user. */

#include <stdio.h>

int dimensional_weight(int volume);

int main(void)
{
    int height, length, width, volume, d_weight;

    printf("Enter height of the box: ");
    scanf("%d", &height);

    printf("Enter the length of the box: ");
    scanf("%d", &length);

    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Weight (pounds): %d\n", dimensional_weight(volume));

    return 0;
}

int dimensional_weight(int volume)
{
    return (volume + 165) / 166;
}