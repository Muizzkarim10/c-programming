#include <stdio.h>
#include <ctype.h>
#include <math.h>

int menu()
{
    printf("Please select one of the following: \n");
    printf("1. Addition.\n");
    printf("2. Subtraction.\n");
    printf("3. Multiplication.\n");
    printf("4. Division.\n");
    printf("5. Power.\n");
    printf("6. Modulus.\n");
    printf("0. Exit.\n");
    printf("Your choice: ");
}

int main()
{
    int a = 0, b = 0;
    int choice = 0;
    while (1)
    {
        menu();
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. \nExiting...");
            return 0;
        }

        if (choice == 0)
        {
            printf("Exiting...\n");
            return 0;
        }

        printf("Enter the First number: ");
        if (scanf("%d", &a) != 1)
        {
            printf("\nInvalid input. Please Enter a number.");
            return 0;
        }

        printf("Enter the Second number: ");
        if (scanf("%d", &b) != 1)
        {
            printf("\nInvalid input. Please Enter a number.");
            return 0;
        }

        printf("+-------------------------+\n");

        switch (choice)
        {
        case 1:
            printf("Result: %d + %d = %d", a, b, a + b);
            break;

        case 2:
            printf("Result: %d - %d = %d", a, b, a - b);
            break;

        case 3:
            printf("Result: %d * %d = %d", a, b, a * b);
            break;

        case 4:
            printf("Result: %d / %d = %d", a, b, a / b);
            break;

        case 5:
            printf("Result: %d^%d = %.0f", a, b, pow(a, b));
            break;

        case 6:
            printf("Result: %d %% %d = %d", a, b, a % b);
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n+-------------------------+\n");
        printf("\n");
    }

    return 0;
}