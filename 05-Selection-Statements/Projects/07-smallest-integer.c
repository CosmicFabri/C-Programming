/*
   7. Write a program that finds the largest and smallest
      of four integers entered by the user:

      Enter four integers: 21 43 10 35
      Largest: 43
      Smallest: 10

      Use as few if statements as possible.
*/

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, min, max;
    int min1, min2, max1, max2;

    printf("Enter four integer numbers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 > i2) {
        min1 = i2;
        max1 = i1;
    } else {
        min1 = i1;
        max1 = i2;
    }

    if (i3 > i4) {
        min2 = i4;
        max2 = i3;
    } else {
        min2 = i3;
        max2 = i4;
    }

    max = max1 > max2 ? max1 : max2;
    min = min1 < min2 ? min1 : min2;
    
    printf("Smallest: %d\n", min);
    printf("Largest: %d\n", max);

    return 0;
}