#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Zero\n");
        return 0;
    }

    int divisor = 1;
    while (number / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor > 0)
    {
        int digit = number / divisor;
        number %= divisor;
        divisor /= 10;

        switch (digit)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }

    return 0;
}
