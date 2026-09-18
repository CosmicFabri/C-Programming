/*
   Formatting integer and floating-point numbers in
   various ways by leveraging conversion specifications.
*/

#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;

    // Output: |40|   40|40   |  040|
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // Output: |   839.210| 8.392e+02|839.21    |
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}