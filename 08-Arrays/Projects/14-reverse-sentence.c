/*
   14. Write a program that reverses the words in a sentence:

   Enter a sentence: you can cage a swallow can't you?
   Reversal of sentence: you can't swallow a cage can you?
*/

#include <stdio.h>

int main(void)
{
    int len = 0;
    char sentence[256], ch;

    printf("Enter a sentence: ");
    ch = getchar();

    // Reading chars into array
    while (ch != '.' &&
           ch != '?' &&
           ch != '!')
    {
        sentence[len] = ch;
        ch = getchar();
        len++;
    }

    // Check for the beginning of each word backwards
    for (int i = len; i >= 0; i--)
    {
        int prev_index = i - 1;
        char prev_char = sentence[prev_index];

        // Pass if we're not at the beginning of a word
        if (prev_char != ' ' && prev_index >= 0)
            continue;

        // Print a word from its beginning
        for (int j = i; j < len; j++)
        {
            char next_char = sentence[j + 1];

            if (next_char == ' ' && i == 0)
            {
                printf("%c", sentence[j]);
                break;
            }

            if (next_char == ' ' || j == len - 1)
            {
                printf("%c ", sentence[j]);
                break;
            }

            printf("%c", sentence[j]);
        }
    }

    // Print the terminating char
    printf("%c\n", ch);

    return 0;
}