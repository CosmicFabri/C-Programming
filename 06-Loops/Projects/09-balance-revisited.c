/*
   9. Programming Project 8 in Chapter 2 asked you to write
      a program that calculates the remaining balance on a
      loan after the first, second, and third monthly pay-
      ments. Modify the program so that it also asks the u-
      ser to enter the number of payments and then displays
      the balance remaining after each of these payments.
*/

#include <stdio.h>

int main(void)
{
    float balance, yearly_interest,
        monthly_payment, monthly_interest;

    int n_payments;

    printf("Enter the amount of loan (dollars): ");
    scanf("%f", &balance);

    printf("Enter the yearly interest (percentage): ");
    scanf("%f", &yearly_interest);

    printf("Enter the monthly payment (dollars): ");
    scanf("%f", &monthly_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &n_payments);

    monthly_interest = (yearly_interest / 100) / 12;

    printf("\n");

    while (n_payments > 0)
    {
        balance = (balance - monthly_payment) + (balance * monthly_interest);
        printf("Balance remaining after first payment: %.2f\n", balance);

        n_payments--;
    }

    return 0;
}