/*
   9. Write a program that generates a “random walk” across a 10 × 10 array. The
      array will contain characters (all '.' initially). The program must ran-
      domly “walk” from element to element, always going up, down, left, or
      right by one element. The elements visited by the program will be labeled
      with the letters A through Z, in the order visited. Here’s an example of
      the desired output:

      A . . . . . . . . .
      B C D . . . . . . .
      . F E . . . . . . .
      H G . . . . . . . .
      I . . . . . . . . .
      J . . . . . . . Z .
      K . . R S T U V Y .
      L M P Q . . . W X .
      . N O . . . . . . .
      . . . . . . . . . .

      Before performing a move, check that (a) it won’t go outside the array,
      and (b) it doesn’t take us to an element that already has a letter as-
      signed. If either condition is violated, try moving in another direction.
      If all four directions are blocked, the program must terminate.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIDE 10

int main(void)
{
    // Initializing rand seed
    srand(time(NULL));

    char grid[SIDE][SIDE], letter = 'A';
    int direction, x = 0, y = 0;

    // Number of char codes, assuming
    // codes of A to Z are subsequent
    int num_codes = 'Z' - 'A';

    // Filling the grid with dots
    for (int i = 0; i < SIDE; i++)
        for (int j = 0; j < SIDE; j++)
            grid[i][j] = '.';

    // Generating the random walk
    while (letter <= num_codes + 'A')
    {
        // Break if all four directions are blocked
        if (
            grid[x][y - 1] != '.' && // top
            grid[x][y + 1] != '.' && // bottom
            grid[x - 1][y] != '.' && // left
            grid[x + 1][y] != '.' // right
        )
            break;

        // Generate random direction (0-3)
        direction = rand() % 4;

        switch (direction)
        {
        // UP
        case 0:
            if (y == 0 ||
                grid[x][y - 1] != '.')
            {
                letter--;
                break;
            }

            grid[x][--y] = letter;
            break;

        // RIGHT
        case 1:
            if (x == SIDE - 1 ||
                grid[x + 1][y] != '.')
            {
                letter--;
                break;
            }

            grid[++x][y] = letter;
            break;

        // DOWN
        case 2:
            if (y == SIDE - 1 ||
                grid[x][y + 1] != '.')
            {
                letter--;
                break;
            }

            grid[x][++y] = letter;
            break;

        // LEFT
        case 3:
            if (x == 0 ||
                grid[x - 1][y] != '.')
            {
                letter--;
                break;
            }

            grid[--x][y] = letter;
            break;

        default:
            break;
        }

        letter++;
    }

    // Printing the walk
    for (int i = 0; i < SIDE; i++)
    {
        for (int j = 0; j < SIDE; j++)
        {
            printf("%c ", grid[i][j]);
        }

        printf("\n");
    }

    return 0;
}