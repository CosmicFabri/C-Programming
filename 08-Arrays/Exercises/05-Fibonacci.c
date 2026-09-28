/*
   5. The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each
      number is the sum of the two preceding numbers. Write a program
      fragment that declares an array named fib_numbers of length 40 and
      fills the array with the first 40 Fibonacci numbers. Hint: Fill in
      the first two numbers individually, then use a loop to compute the
      remaining numbers.
*/

#include <stdio.h>

#define FIB_COUNT 40

int main(void)
{
    int fib[FIB_COUNT] = {0, 1};

    printf("Fibonacci sequence (%d elements): ", FIB_COUNT);
    printf("%d ", fib[0]);
    printf("%d ", fib[1]);

    for (int i = 0; i + 2 < FIB_COUNT; i++)
    {
        fib[i + 2] = fib[i] + fib[i + 1];
        printf("%d ", fib[i + 2]);
    }
    
    printf("\n");

    return 0;
}