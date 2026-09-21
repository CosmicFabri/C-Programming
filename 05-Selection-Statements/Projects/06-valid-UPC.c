/*
   6. Modify the upc.c program of Section 4.1 so that it checks
      whether a UPC is valid. After the user enters a UPC, the
      program will display either VALID or NOT VALID.
*/

#include <stdio.h>

int main(void)
{
    // Check digit computation helper variables
    int first_sum, second_sum, total, check_digit;

    // UPC digits
    int d, f,
        i1, i2, i3, i4, i5,
        j1, j2, j3, j4, j5;

    printf("Enter a UPC: ");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d %1d", &d,
          &i1, &i2, &i3, &i4, &i5,
          &j1, &j2, &j3, &j4, &j5, &f);

    // Check digit computation
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = (first_sum * 3) + second_sum;
    check_digit = 9 - ((total - 1) % 10);

    f == check_digit ? printf("VALID\n") : printf("NOT VALID\n");

    return 0;
}