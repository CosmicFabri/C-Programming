/*
   11. Write the following function:

       float compute_GPA(char grades[], int n);

       The grades array will contain letter grades (A, B, C, D, or F, either
       upper-case or lower-case); n is the length of the array. The function
       should return the average of the grades (assume that A = 4, B = 3, C
       = 2, D = 1, and F = 0).
*/

#include <ctype.h>
#include <stdio.h>

int compute_grade(char grade);
float compute_GPA(char* grades, int n);

int main(void)
{
    char grades[5] = {'a', 'a', 'a', 'b', 'a'};

    printf("GPA: %.2f\n", compute_GPA(grades, 5));

    return 0;
}

int compute_grade(char grade)
{
    switch (toupper(grade))
    {
    case 'A':
        return 4;

    case 'B':
        return 3;
    
    case 'C':
        return 2;

    case 'D':
        return 1;

    case 'F':
        return 0;
    
    default:
        break;
    }
}

float compute_GPA(char* grades, int n)
{
    float total = 0.0f;

    for (int i = 0; i < n; i++)
        total += compute_grade(grades[i]);

    return total / n;
}