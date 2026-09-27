/*
   14. Write a program that uses Newton’s method to compute the
       square root of a positive floating-point number:

       Enter a positive number: 3
       Square root: 1.73205

       Let x be the number entered by the user.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    double y = 1, old_y, average, product;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    average = (y + (x / y)) / 2;

    old_y = y;
    y = average;

    product = y * 0.00001;

    while (fabs(old_y - y) >= product)
    {
        average = (y + (x / y)) / 2;

        old_y = y;
        y = average;

        product = y * 0.00001;
    }

    printf("Square root: %.5lf\n", y);

    return 0;
}