#include <stdio.h>

int main(void)
{

    int year;
    printf("Enter the current Year: \n> ");
    scanf("%4d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The year %d is a leap Year.", year);
    }
    else
    {
        printf("Not a leap Year.");
    }

    return 0;
}
