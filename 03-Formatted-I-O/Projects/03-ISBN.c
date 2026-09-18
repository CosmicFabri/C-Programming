/*
   3. Books are identified by an International Standard Book
      Number (ISBN). ISBNs assigned after January 1, 2007
      contain 13 digits, arranged in five groups, such as
      978-0-393-97950-3. Write a program that breaks down an
      ISBN entered by the user:

      Enter ISBN: 978-0-393-97950-3
      GS1 prefix: 978
      Group identifier: 0
      Publisher code: 393
      Item number: 97950
      Check digit: 3
*/

#include <stdio.h>

int main(void)
{
    int prefix, id, code, number, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &id, &code, &number, &digit);

    printf("\n");

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", digit);

    return 0;
}