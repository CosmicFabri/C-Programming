/*
   5. In the SCRABBLE Crossword Game, players form words using
      small tiles, each containing a letter and a face value.
      The face value varies from one letter to another, based
      on the letter’s rarity. (Here are the face values: 1:
      AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10:
      QZ.) Write a program that computes the value of a word
      by summing the values of its letters:

      Enter a word: pitfall
      Scrabble value: 12

      Your program should allow any mixture of lower-case and
      upper-case letters in the word.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int value = 0;

    printf("Enter a word: ");
    ch = getchar();

    // Add the face value of the current letter
    while (ch != '\n')
    {
        // Standarize to upper case
        ch = toupper(ch);

        switch (ch)
        {
        // Face value 2
        case 'D':
        case 'G':
            value += 2;
            break;

        // Face value 3
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            value += 3;
            break;

        // Face value 4
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            value += 4;
            break;

        // Face value 5
        case 'K':
            value += 5;
            break;

        // Face value 8
        case 'J':
        case 'X':
            value += 8;
            break;

        // Face value 10
        case 'Q':
        case 'Z':
            value += 10;
            break;

        // Face value 1
        default:
            value++;
            break;
        }

        // Get next char from buffer
        ch = getchar();
    }

    printf("Scrabble value: %d\n", value);

    return 0;
}