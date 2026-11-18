/*
   14. The following function is supposed to return true if any element of the
       array a has the value 0 and false if all elements are nonzero. Sadly,
       it contains an error. Find the error and show how to fix it:
*/

#include <stdbool.h>
#include <stdio.h>

#define N 5

bool has_zero(int* a, int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    
    return false;
}

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5};
    int b[N] = {1, 2, 0, 4, 5};

    printf("Does array a contain 0? %d\n", has_zero(a, N));
    printf("Does array b contain 0? %d\n", has_zero(b, N));

    return 0;
}