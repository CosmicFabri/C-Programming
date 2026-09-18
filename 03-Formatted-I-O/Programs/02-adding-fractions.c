/*
   Adds two fractions.
*/

#include <stdio.h>

int main(void)
{
    int num_1, denom_1, num_2, denom_2, result_num, result_denom;

    printf("Enter first fraction (N / N): ");
    scanf("%d / %d", &num_1, &denom_1);

    printf("Enter second fraction (N / N): ");
    scanf("%d / %d", &num_2, &denom_2);

    result_num = num_1 * denom_2 + num_2 * denom_1;
    result_denom = denom_1 * denom_2;

    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}