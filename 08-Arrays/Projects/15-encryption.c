/*
   15. One of the oldest known encryption techniques is the Caesar cipher,
       attributed to Julius Caesar. It involves replacing each letter in a
       message with another letter that is a fixed number of positions la-
       ter in the alphabet. (If the replacement would go past the letter Z,
       the cipher “wraps around” to the beginning of the alphabet. For ex-
       ample, if each letter is replaced by the letter two positions after
       it, then Y would be replaced by A, and Z would be replaced by B.)
       Write a program that encrypts a message using a Caesar cipher. The
       user will enter the message to be encrypted and the shift amount
       (the number of positions by which letters should be shifted):

       Enter message to be encrypted: Go ahead, make my day.
       Enter shift amount (1-25): 3
       Encrypted message: Jr dkhdg, pdnh pb gdb
*/

#include <stdio.h>

int main(void)
{
    int len = 0, shift;
    char message[80], ch;

    printf("Enter message to be encrypted: ");
    scanf("%c", &ch);

    while (ch != '\n')
    {
        message[len] = ch;
        ch = getchar();
        len++;
    }

    char encrypted[len];

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (int i = 0; i < len; i++)
    {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a') + shift) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A') + shift) % 26 + 'A';
        }

        printf("%c", ch);
    }

    printf("\n");

    return 0;
}