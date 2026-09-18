/*
   1. Determine the output of the given printf statements.
*/

#include <stdio.h>

int main(void)
{
    // |    86,1040|
    printf("|%6d,%4d|\n", 86, 1040);

    // | 3.02530e+01|
    printf("|%12.5e|\n", 30.253);
    
    // |83.1620|
    printf("|%.4f|\n", 83.162);

    // |9.98e-08|
    printf("|%-6.2g|\n", .0000009979);

    return 0;
}