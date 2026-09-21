/*
   3. Modify the broker.c program of Section 5.2 by making both
      of the following changes:
      
      (a) Ask the user to enter the number of shares and the
          price per share, instead of the value of the trade.
          
      (b) Add statements that compute the commission charged
          by a rival broker ($33 plus 3¢ per share for fewer
          than 2000 shares; $33 plus 2¢ per share for 2000
          shares or more). Display the rival’s commission as
          well as the commission charged by the original broker.
*/

#include <stdio.h>

int main(void)
{
    int share_number;
    float share_price, value,
        original_commission, rival_commission;

    printf("Enter the number of shares: ");
    scanf("%d", &share_number);

    printf("Enter price of each share: ");
    scanf("%f", &share_price);

    value = share_number * share_price;

    // Original broker's commission
    if (value < 2500)
        original_commission = 30 + value * .017f;
    else if (value < 6250.00f)
        original_commission = 56.00f + value * .0066f;
    else if (value < 20000.00f)
        original_commission = 76.00f + value * .0034f;
    else if (value < 50000.00f)
        original_commission = 100.00f + value * .0022f;
    else if (value < 500000.00f)
        original_commission = 155.00f + value * .0011f;
    else
        original_commission = 255.00f + value * .0009f;

    if (original_commission < 39.00f)
        original_commission = 39.00f;

    // Rival broker's share value
    if (share_number < 2000)
        rival_commission = share_number * 33.03f;
    else
        rival_commission = share_number * 33.02f;
    
    printf("Original broker's commission: %.2f\n", original_commission);
    printf("Rival broker's commission: %.2f\n", rival_commission);

    return 0;
}