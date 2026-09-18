/*
   8. Write a program that calculates the remaining balance on a
      balance after the first, second, and third monthly payments:

      Enter amount of balance: 20000.00
      Enter interest rate: 6.0
      Enter monthly payment: 386.66

      Balance remaining after first payment: $19713.34
      Balance remaining after second payment: $19425.25
      Balance remaining after third payment: $19135.71
*/

#include <stdio.h>

int main(void)
{
    float balance, yearly_interest, monthly_payment, monthly_interest;

    printf("Enter the amount of loan (dollars): ");
    scanf("%f", &balance);

    printf("Enter the yearly interest (percentage): ");
    scanf("%f", &yearly_interest);

    printf("Enter the monthly payment (dollars): ");
    scanf("%f", &monthly_payment);

    printf("\n");

    monthly_interest = (yearly_interest / 100) / 12;

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}