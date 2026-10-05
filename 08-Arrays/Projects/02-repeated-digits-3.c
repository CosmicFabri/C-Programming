/*
   3. Modify the repdigit.c program of Section 8.1 so that it prints a
      table showing how many times each digit appears in the number:

      Enter a number: 41271092
      Digit:        0 1 2 3 4 5 6 7 8 9
      Occurrences:  1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

int main(void)
{
    int number, curr_digit;
    int occurrences[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        curr_digit = number % 10;
        occurrences[curr_digit]++;
        number /= 10;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++)
        printf("%d ", i);
    
    printf("\nOccurrences:\t");
    for (int i = 0; i < 10; i++)
        printf("%d ", occurrences[i]);

    printf("\n");

    return 0;
}