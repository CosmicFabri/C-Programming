/*
   2. Write a program that formats product information entered by
      the user. A session with the program should look like this:

      Enter item number: 583
      Enter unit price: 13.5
      Enter purchase date (mm/dd/yyyy): 10/24/2010

      Item      Unit        Purchase
                Price       Date
      583       $  13.50    10/24/2010
*/

#include <stdio.h>

int main(void)
{
    int item_number, pur_month, pur_day, pur_year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &pur_month, &pur_day, &pur_year);

    printf("\n");

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n",
        item_number, unit_price, pur_month, pur_day, pur_year);

    return 0;
}