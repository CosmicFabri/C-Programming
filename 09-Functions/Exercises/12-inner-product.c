/*
   12. Write the following function:

       double inner_product(double a[], double b[], int n);

       The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] *
   b[n-1].
*/

#include <stdio.h>

double inner_product(double* a, double* b, int n)
{
    double product = 0.0;

    for (int i = 0; i < n; i++)
        product += a[i] * b[i];

    return product;
}

int main(void)
{
    double a[5] = {2.2, 3.1, -2.7, 4.8, 6.9};
    double b[5] = {-2.2, 3.1, -2.7, 4.8, 6.9};

    printf("Inner product: %.2lf\n", inner_product(a, b, 5));

    return 0;
}