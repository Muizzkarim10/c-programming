#include <stdio.h>

int main(void)
{
    int initial_balance, contribution, years;
    float inflation_rate, return_rate;

    printf("Enter your account balance: \n");
    scanf("%d", &initial_balance);
    if (initial_balance <= 0)
    {
        printf("Initial balance can't be less than or equal to zero.\n");
    }

    printf("Enter your monthly contribution amount: \n");
    scanf("%d", &contribution);
    if (contribution <= 0)
    {
        printf("Contribution can't be less than or equal to zero.\n");
    }

    printf("Enter annual inflation rate (0 to 1): \n");
    scanf("%f", &inflation_rate);
    if (inflation_rate <= 0 || inflation_rate > 1)
    {
        printf("Please enter a number between 0 and 1.\n");
    }

    printf("Enter years until retirement: \n");
    scanf("%d", &years);
    if (years <= 0)
    {
        printf("Years until retirement can't be zero or negative.\n");
    }

    printf("Enter annual return rate (0 to 1): \n");
    scanf("%f", &return_rate);
    if (return_rate <= 0 || return_rate >= 1)
    {
        printf("Please enter a number between 0 and 1.\n");
    }

    float monthly_return_rate = return_rate / 12;
    float monthly_inflation_rate = inflation_rate / 12;
    int months = years * 12;
    float balance = initial_balance;
    float total_contributions = contribution * months;
    float final_balance;

    printf("Month\tInterest\tBalance\n");

    for (int month = 1; month <= months; month++)
    {
        float inflation_adjusted_return = (1 + monthly_return_rate) / (1 + monthly_inflation_rate) - 1;
        float interest = balance * inflation_adjusted_return;
        balance += interest + contribution;
        printf("%d\t%.2f\t\t%.2f\n", month, interest, balance);
    }

    final_balance = balance;
    float total_profit = final_balance - initial_balance - total_contributions;
    printf("Total profit: %.2f\n", total_profit);
    printf("Total Nest Egg: %.2f\n", balance);

    return 0;
}
