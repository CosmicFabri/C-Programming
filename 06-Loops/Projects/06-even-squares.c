/*
   6. Write a program that prompts the user to enter a number
      n, then prints all even squares between 1 and n. For
      example, if the user enters 100, the program should
      print the following:

      4
      16
      36
      64
      100
*/

#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("Enter integer number: ");
    scanf("%d", &n);

    printf("Even squares between 1 and n: ");

    while (i * i <= n)
    {
        if (i % 2 == 0)
            printf("%d ", i * i);

        i++;
    }

    printf("\n");

    return 0;
}