/*
   6. European countries use a 13-digit code, known as a European
      Article Number (EAN) instead of the 12-digit Universal Product
      Code (UPC) found in North America. Each EAN ends with a check
      digit, just as a UPC does.

      Modify the upc.c program of Section 4.1 so that it calculates
      the check digit for an EAN. The user will enter the first 12
      digits of the EAN as a single number:

      Enter the first 12 digits of an EAN: 869148426000
      Check digit: 8
*/

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6,
        first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &i1, &i2, &i3, &i4, &i5, &i6,
        &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = i2 + i4 + i6 + j2 + j4 + j6;
    second_sum = i1 + i3 + i5 + j1 + j3 + j5;
    total = (3 * first_sum) + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}