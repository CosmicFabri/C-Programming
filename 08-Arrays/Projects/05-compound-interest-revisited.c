/*
   5. Modify the interest.c program of Section 8.1 so that it compounds
      interest monthly instead of annually. The form of the output
      shouldn’t change; the balance should still be shown at annual in-
      tervals
*/

#include <stdio.h>

#define NUM_RATES sizeof(value) / sizeof(value[0])
#define INITIAL_VALUE 100.00f

int main()
{
    int lowest_rate, number_years;
    double value[5]; // the value of each interest

    printf("Enter interest rate: ");
    scanf("%d", &lowest_rate);

    printf("Enter number of years: ");
    scanf("%d", &number_years);

    printf("\nYear");
    for (int i = 0; i < NUM_RATES; i++)
    {
        printf("%11d%%", lowest_rate + i);
        value[i] = INITIAL_VALUE;
    }

    for (int year = 1; year <= number_years; year++)
    {
        printf("\n%3d    ", year);

        // Computing the yearly interest
        for (int i = 0; i < NUM_RATES; i++)
        {
            // Monthly compound interest
            for (int month = 0; month < 12; month++)
                value[i] *= 1 + (.01f * (lowest_rate + i));

            // Resulting yearly interest
            printf("%12.2f", value[i]);
        }
    }

    printf("\n");

    return 0;
}