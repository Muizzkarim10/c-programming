#include <stdio.h>

int main(void)
{
    int date, month, year;

    printf("Enter a Date in the following format (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("You entered: %04d/%02d/%02d\n", year, month, date);

    return 0;
}
