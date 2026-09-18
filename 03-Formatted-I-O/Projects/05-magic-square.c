/*
   5. Write a program that asks the user to enter the numbers
      from 1 to 16 (in any order) and then displays the
      numbers in a 4 by 4 arrangement, followed by the sums
      of the rows, columns, and diagonals:

      Enter the numbers from 1 to 16 in any order:
      16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

      16 3 2 13
      5 10 11 8
      9 6 7 12
      4 15 14 1

      Row sums: 34 34 34 34
      Column sums: 34 34 34 34
      Diagonal sums: 34 34
*/

#include <stdio.h>

int main(void)
{
    int r1_n1, r1_n2, r1_n3, r1_n4;
    int r2_n1, r2_n2, r2_n3, r2_n4;
    int r3_n1, r3_n2, r3_n3, r3_n4;
    int r4_n1, r4_n2, r4_n3, r4_n4;

    int r1_sum, r2_sum, r3_sum, r4_sum;
    int c1_sum, c2_sum, c3_sum, c4_sum;
    int d1_sum, d2_sum;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
        &r1_n1, &r1_n2, &r1_n3, &r1_n4,
        &r2_n1, &r2_n2, &r2_n3, &r2_n4,
        &r3_n1, &r3_n2, &r3_n3, &r3_n4,
        &r4_n1, &r4_n2, &r4_n3, &r4_n4);

    r1_sum = r1_n1 + r1_n2 + r1_n3 + r1_n4;
    r2_sum = r2_n1 + r2_n2 + r2_n3 + r2_n4;
    r3_sum = r3_n1 + r3_n2 + r3_n3 + r3_n4;
    r4_sum = r4_n1 + r4_n2 + r4_n3 + r4_n4;

    c1_sum = r1_n1 + r2_n1 + r3_n1 + r4_n1;
    c2_sum = r1_n2 + r2_n2 + r3_n2 + r4_n2;
    c3_sum = r1_n3 + r2_n3 + r3_n3 + r4_n3;
    c4_sum = r1_n4 + r2_n4 + r3_n4 + r4_n4;

    d1_sum = r1_n1 + r2_n2 + r3_n3 + r4_n4;
    d2_sum = r1_n4 + r2_n3 + r3_n2 + r4_n1;

    printf("\n");

    printf("Row sums: %d %d %d %d\n", r1_sum, r2_sum, r3_sum, r4_sum);
    printf("Column sums: %d %d %d %d\n", c1_sum, c2_sum, c3_sum, c4_sum);
    printf("Diagonal sums: %d %d\n", d1_sum, d2_sum);

    return 0;
}