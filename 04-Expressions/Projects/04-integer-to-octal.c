/*
   4. Write a program that reads an integer entered by
      the user and displays it in octal (base 8):

      Enter a number between 0 and 32767: 1953
      In octal, your number is: 03641
*/

#include <stdio.h>

int main(void)
{
    int number, o1, o2, o3, o4, o5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    o5 = number % 8; number /= 8;

    o4 = number % 8; number /= 8;

    o3 = number % 8; number /= 8;

    o2 = number % 8; number /= 8;

    o1 = number % 8; number /= 8;

    printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    return 0;
}