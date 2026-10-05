/*
   6. The prototypical Internet newbie is a fellow named B1FF, who has a
      unique way of writing messages. Here’s a typical B1FF communiqué:

      H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

      Write a “B1FF filter” that reads a message entered by the user and
      translates it into B1FF speak:

      Enter message: Hey dude, C is rilly cool
      In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

      Your program should convert the message to upper-case letters,
      substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0,
      S→5), and then append 10 or so exclamation marks.
*/

#include <ctype.h>
#include <stdio.h>

#define MAX_LEN sizeof(message) / sizeof(message[0])

int main(void)
{
    char message[256], ch;

    printf("Enter a message: ");
    scanf("%c", &ch);

    // Reading characters into array
    for (int i = 0; i < MAX_LEN; i++)
    {
        // Store uppercase char
        message[i] = toupper(ch);

        if (ch == '\n')
            break;

        scanf("%c", &ch);
    }

    printf("In B1FF-speak: ");

    // Translating message from array
    for (int i = 0; i < MAX_LEN; i++)
    {
        if (message[i] == '\n')
            break;

        switch (message[i])
        {
        case 'A':
            printf("4");
            break;

        case 'B':
            printf("8");
            break;

        case 'E':
            printf("3");
            break;

        case 'I':
            printf("1");
            break;

        case 'O':
            printf("0");
            break;

        case '2':
            printf("5");
            break;

        default:
            printf("%c", message[i]);
            break;
        }
    }

    printf("!!!!!!!!!!\n");

    return 0;
}