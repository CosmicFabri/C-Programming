/*
   13. Write a program that calculates the average word length for a sentence:

       Enter a sentence: It was deja vu all over again.
       Average word length: 3.4

       For simplicity, your program should consider a punctuation mark to be
       part of the word to which it is attached. Display the average word
       length to one decimal place.
*/

#include <stdio.h>

int main(void)
{
    int words = 0, overall_chars = 0;
    char ch;

    printf("Enter a sentence: ");
    scanf(" %c", &ch); // allow spaces before 1st char

    while (1)
    {
        // words are separated by spaces
        while (ch != ' ' && ch != '\n')
        {
            overall_chars++;
            ch = getchar();
        }
        
        words++;

        if (ch == '\n')
            break;

        // allow spaces before next word
        scanf(" %c", &ch);
    }

    printf("Average word length: %.1f\n", (float) overall_chars / words);

    return 0;
}