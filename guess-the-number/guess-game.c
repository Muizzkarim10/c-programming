#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{

    printf("Welcome to the Guessing Game!\n");
    printf("I have chosen a Random number between 1 and 100\n");
    printf("Your trun to guess the number.\n");

    srand(time(NULL));
    int secretNumber = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    while (1)
    {
        while (1)
        {
            printf("Enter a number: ");

            if (scanf("%d", &guess) != 1)
            {
                while (getchar() != '\n')
                    ; // Discard invalid characters
                printf("Invalid input, please enter a valid number.\n");
                continue;
            }

            printf("You entered: %d\n", guess);
            break;
        }
        attempts++;

        if (guess == secretNumber)
        {
            printf("Congratulations! You have guessed the number in %d attempts\n", attempts);
            break;
        }
        else if (guess < secretNumber)
        {
            printf("Try a higher number\n");
            printf("\n");
        }
        else
        {
            printf("Try a lower number\n");
            printf("\n");
        }
    }

    return 0;
}