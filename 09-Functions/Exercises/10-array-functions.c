/*
   10. Write functions that return the following values. (Assume that a and n
   are parameters, where a is an array of int values and n is the length of
   the array.)

   (a) The largest element in a.
   (b) The average of all elements in a.
   (c) The number of positive elements in a.
*/

#include <stdio.h>

#define N 6

int largest(int* a, int n);
float average(int* a, int n);
int positive_elements(int* a, int n);

int main(void)
{
    int array[N] = {5, 10, 20, 15, 2, -4};

    printf("Largest element of array: %d\n", largest(array, N));
    printf("Average of all elements in array: %.2f\n", average(array, N));
    printf("Number of positive numbers in array: %d\n", positive_elements(array, N));

    return 0;
}

int largest(int* a, int n)
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

float average(int* a, int n)
{
    int total = 0;

    for (int i = 0; i < N; i++)
        total += a[i];
    
    return (float) total / n;
}

int positive_elements(int* a, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            count++;
    }
    
    return count;
}