/*
   13. Write the following function, which evaluates a chess position:

       int evaluate_position(char board[8][8]);

       board represents a configuration of pieces on a chessboard, where the
       letters K, Q, R, B, N, P represent White pieces, and the letters k,
       q, r, b, n, and p represent Black pieces. evaluate_position should
       sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P =
       1). It should also sum the values of the Black pieces (done in a si-
       milar way). The function will return the difference between the two
       numbers. This value will be positive if White has an advantage in ma-
       terial and negative if Black has an advantage.
*/

#include <stdio.h>

int evaluate_piece(char piece);
int evaluate_position(char board[8][8]);

int main(void)
{
    char board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    printf("Difference: %d\n", evaluate_position(board));

    return 0;
}

int evaluate_piece(char piece)
{
    switch (piece)
    {
    case 'K':
        return 10;

    case 'Q':
        return 9;

    case 'R':
        return 5;

    case 'B':
    case 'N':
        return 3;

    case 'P':
        return 1;

    case 'k':
        return -10;

    case 'q':
        return -9;

    case 'r':
        return -5;

    case 'b':
    case 'n':
        return -3;

    case 'p':
        return -1;

    default:
        return 0;
    }
}

int evaluate_position(char board[8][8])
{
    int total = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            total += evaluate_piece(board[i][j]);
        }
    }

    return total;
}