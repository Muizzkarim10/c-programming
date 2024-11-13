#include <stdio.h>

int main(void)
{
    int number, sum = 0;
    printf("Enter the number: \n> ");
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum < number)
    {
        printf("The number is deficient");
    }
    else
    {
        printf("Number is not deficient");
    }

    return 0;
}
