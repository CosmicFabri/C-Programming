/*
   1. The square2.c program of Section 6.3 will fail (usually
      by printing strange answers) if i * i exceeds the maxi-
      mum int value. Run the program and determine the small-
      est value of n that causes failure. Try changing the
      type of i to short and running the program again.
      (Don’t forget to update the conversion specifications
      in the call of printf!) Then try long. From these expe-
      riments, what can you conclude about the number of bits
      used to store integer types on your machine?
*/

#include <stdio.h>

int main(void)
{
    // Max int value on a UNIX x86_64 system:
    // 2^31 - 1 = 2,147'483647

    // sqrt(max(int)) ≈ 46,340
    // min value of n that causes failure: 46,341

    // Max short value on a UNIX x86_64 system:
    // 2^15 - 1 = 32,767

    // sqrt(max(short)) ≈ 181
    // min value of n that causes failure: 182

    // Max long value on a UNIX x86_64 system:
    // 2^63 - 1 = 9.223362 x 10^18

    // sqrt(max(long)) = 3,037'000,500
    // min value of n that causes failure: 3,037'000,501
    
    long n;
    // int i
    // short i;
    long i;

    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%ld\t\t%ld\n", i, i * i);

    /*
       I find it really interesting how great the max size
       difference between different integer types can get
       using only a couple of bits more. However, I don't
       think I am going to compute extremely large numbers
       like the ones the double type can hold.
    */

    return 0;
}