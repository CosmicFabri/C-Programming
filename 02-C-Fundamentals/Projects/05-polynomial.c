/*
   5. Write a program that asks the user to enter a value for x
      and then displays the value of the following polynomial:

    3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6
*/

#include <stdio.h>

int main(void)
{
    int value;

    printf("Enter the value: ");
    scanf("%d", &value);

    int power_five = value * value * value * value * value;
    int power_four = value * value * value * value;
    int power_three = value * value * value;
    int power_two = value * value;

    int polynomial =
        3 * power_five + 2 * power_four - 5 * power_three
        - power_two + 7 * value - 6;

    printf("Polynoimal: %d\n", polynomial);

    return 0;
}