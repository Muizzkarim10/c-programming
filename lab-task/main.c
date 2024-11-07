#include <stdio.h>

int main()
{
    int total_hours, items;
    float pieceworkers, pay, total_pay, sales, managers, hourly_pay;
    float commision_pay = 250;

    float total_pay_managers, total_pay_hourly, total_pay_commision, total_pay_pieceworker;
    int exit = 0;

    while (1)
    {
        int choice;
        printf("Enter employee paycode:\n");
        printf("[1 for manager, 2 for hourly, 3 for commission, 4 for pieceworker, -1 to exit]\n> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter fixed weekly salary: ");
            scanf("%f", &managers);
            printf("Employee weekly pay is: %.2f\n", managers);
            total_pay_managers += managers;
            break;

        case 2:
            printf("Enter hourly salary: ");
            scanf("%f", &hourly_pay);
            printf("Enter total hours worked: ");
            scanf("%d", &total_hours);

            if (total_hours > 40)
            {
                total_pay = (40 * hourly_pay) + ((total_hours - 40) * hourly_pay * 1.5);
            }
            else
            {
                total_pay = total_hours * hourly_pay;
            }

            printf("Employee weekly pay is: %.2f\n", total_pay);
            total_pay_hourly += total_pay;
            break;

        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%f", &sales);

            total_pay = commision_pay + (sales * 0.057);
            printf("Employee weekly pay is: %.2f\n", total_pay);
            total_pay_commision += total_pay;
            break;

        case 4:
            printf("Enter number of items produced: ");
            scanf("%d", &items);
            printf("Enter pay per item: ");
            scanf("%f", &pay);

            pieceworkers = items * pay;
            printf("Employee weekly pay is: %.2f\n", pieceworkers);
            total_pay_pieceworker += pieceworkers;
            break;

        case -1:
            printf("Exiting...\n\n");
            exit = 1;
            break;

        default:
            printf("Invalid input.\n");
            break;
        }

        if (exit == 1)
        {
            break;
        }

        printf("\n");
    }

    printf("Summary of payments\n");
    printf("Total paid to Managers: %.2f\n", total_pay_managers);
    printf("Total paid to Hourly workers: %.2f\n", total_pay_hourly);
    printf("Total paid to Commission workers: %.2f\n", total_pay_commision);
    printf("Total paid to Piece workers: %.2f\n", total_pay_pieceworker);

    return 0;
}
