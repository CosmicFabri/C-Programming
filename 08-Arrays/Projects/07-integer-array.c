/*
   7. Write a program that reads a 5 × 5 array of integers and then prints
      the row sums and the column sums:

      Enter row 1: 8 3 9 0 10
      Enter row 2: 3 5 17 1 1
      Enter row 3: 2 8 6 23 1
      Enter row 4: 15 7 3 2 9
      Enter row 5: 6 14 2 6 0

      Row totals: 30 27 40 36 28
      Column totals: 34 37 37 32 21
*/

#include <stdio.h>

#define SIDE 5

int main(void)
{
    int grid[SIDE][SIDE],
        row_totals[SIDE] = {0},
        col_totals[SIDE] = {0};

    // Reading numbers into the grid
    for (int row = 0; row < SIDE; row++)
    {
        printf("Enter row %d: ", row + 1);

        for (int col = 0; col < SIDE; col++)
            scanf("%d", &grid[row][col]);
    }

    // Computing the row totals
    for (int i = 0; i < SIDE; i++)
        for (int j = 0; j < SIDE; j++)
            // Sum col values per row
            row_totals[i] += grid[i][j];

    // Computing the col totals
    for (int i = 0; i < SIDE; i++)
        for (int j = 0; j < SIDE; j++)
            // Sum row values per col
            col_totals[i] += grid[j][i];

    printf("\nRow totals: ");
    for (int i = 0; i < SIDE; i++)
        printf("%d ", row_totals[i]);

    printf("\nCol totals: ");
    for (int i = 0; i < SIDE; i++)
        printf("%d ", col_totals[i]);

    printf("\n");

    return 0;
}