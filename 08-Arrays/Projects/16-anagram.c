/*
   16. Write a program that tests whether two words are anagrams (permutations
       of the same letters):

       Enter first word: smartest
       Enter second word: mattress
       The words are anagrams.

       Enter first word: dumbest
       Enter second word: stumble
       The words are not anagrams.
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int len = 0, current_char, sum = 0;
    char word_1[40];
    char word_2[40];
    char char_seen[26] = {0}, ch;

    printf("Enter first word: ");
    ch = tolower(getchar());

    // Reading first word into array
    while (ch != '\n')
    {
        word_1[len] = ch;
        current_char = ch - 'a';

        // Incrementing char appearance
        char_seen[current_char]++;

        // Reading next char
        ch = getchar();
        len++;
    }

    len = 0;

    printf("Enter second word: ");
    ch = tolower(getchar());

    // Reading second word into array
    while (ch != '\n')
    {
        word_2[len] = ch;
        current_char = ch - 'a';

        // Decrementing char appearance
        char_seen[current_char]--;

        // Reading next char
        ch = getchar();
        len++;
    }

    // Checking for nonzero values in array
    for (int i = 0; i < len; i++)
        sum += char_seen[i];
    
    if (sum == 0)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}