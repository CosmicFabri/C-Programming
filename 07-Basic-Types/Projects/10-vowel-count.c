/*
   10. Write a program that vowelss the number of vowels
       (a, e, i, o, and u) in a sentence:

       Enter a sentence: And that's the way it is.
       Your sentence contains 6 vowels.
*/

#include <stdio.h>

int main(void)
{
    int vowels = 0;
    char ch;

    printf("Enter a sentence: ");
    ch = getchar();

    while (ch != '\n')
    {
        if (ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u')
            vowels++;

        ch = getchar();
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}