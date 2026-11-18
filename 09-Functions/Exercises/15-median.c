/*
   15. The following (rather confusing) function finds the median of three
       numbers. Rewrite the function so that it has just one return statement.
*/

#include <stdio.h>

double median(double x, double y, double z)
{
    double result;

    if (x <= y)
        if (y <= z)
            result = y;
        else if (x <= z)
            result = z;
        else
            result = x;
    else
    {
        if (z <= y)
            result = y;
        if (x <= z)
            result = x;
    }

    return result;
}

int main(void)
{
    double x = 1, y = 2, z = 3;

    printf("Median of %.2lf, %.2lf and %.2lf: %.2lf\n", x, y, z,
           median(x, y, z));

    return 0;
}