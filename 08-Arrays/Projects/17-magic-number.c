/*
   17. Write a program that prints an n × n magic square (a square arrangement
       of the numbers 1, 2, ..., n2 in which the sums of the rows, columns,
       and diagonals are all the same). The user will specify the value of n:

       This program creates a magic square of a specified size.
       The size must be an odd number between 1 and 99.
       Enter size of magic square: 5

       17   24    1    8   15
       13    5    7   14   16
        4    6   13   20   22
       10   12   19   21    3
       11   18   25    2    9
*/

#include <stdio.h>

int main(void)
{
    int size, square, x, y;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if (size % 2 == 0 || size > 99)
        return 0;

    int magic[size][size];

    square = size * size;

    // Middle of row 0
    x = 0;
    y = (size / 2);

    // Empty initializing magic to 0
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            magic[i][j] = 0;

    // Filling the magic square
    for (int i = 1; i <= square; i++)
    {
        if (x < 0)
            x = size - 1;

        if (x >= size)
            x %= size;

        if (y >= size)
            y = 0;

        if (y < 0)
            y = size - 1;

        if (magic[x][y] != 0)
        {
            x += 2;
            y--;
            i--;
            continue;
        }

        magic[x][y] = i;

        x--;
        y++;
    }

    printf("\n");

    // Printing the magic square
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%4d", magic[i][j]);
        }

        printf("\n");
    }

    return 0;
}