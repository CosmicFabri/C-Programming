/*
   3. Prints a table of compound interest.
*/

#include <stdio.h>

#define NUM_RATES sizeof(value) / sizeof(value[0])
#define INITIAL_VALUE 100.00f

int main() {
    int lowest_rate, number_years;
    double value[5]; // the value of each interest

    printf("Enter interest rate: ");
    scanf("%d", &lowest_rate);

    printf("Enter number of years: ");
    scanf("%d", &number_years);

    printf("\nYear");
    for (int i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", lowest_rate + i);
        value[i] = INITIAL_VALUE;
    }

    for (int year = 1; year <= number_years; year++) {
        printf("\n%3d    ", year);

        for (int i = 0; i < NUM_RATES; i++) {
            value[i] *= 1 + (.01f * (lowest_rate + i));
            printf("%7.2f", value[i]);
        }
    }

    printf("\n");
    
    return 0;
}