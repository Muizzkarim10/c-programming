#include <stdio.h>

int main()
{
    int income;
    int children;
    float tax;
    printf("Enter your Adjusted Gross Income: ");
    scanf("%d", &income);
    printf("How many children do you have: ");
    scanf("%d", &children);

    if (income <= 19900)
    {
        tax = (income * 0.1);
    }
    else if (income > 11900 && income <= 81050)
    {
        tax = 1990 + (income - 19900) * 0.12;
    }
    else if (income > 81050 && income <= 172750)
    {
        tax = 9328 + (income - 81050) * 0.22;
    }
    else if (income > 172750 && income <= 329850)
    {
        tax = 29502 + (income - 172750) * 0.24;
    }
    else if (income > 329850 && income <= 418850)
    {
        tax = 67206 + (income - 329850) * 0.32;
    }
    else if (income > 418850 && income <= 628300)
    {
        tax = 95686 + (income - 418850) * 0.35;
    }
    else if (income > 628300)
    {
        tax = 168933.50 + (income - 628300) * 0.37;
    }

    if (children > 0)
    {
        tax = tax - (children * 2000);
    }

    if (tax < 0)
    {
        tax = 0;
    }

    printf("AGI \t Number of kids \t Tax Total \n");
    printf("%d \t %d \t\t\t %.2f", income, children, tax);

    return 0;
}

