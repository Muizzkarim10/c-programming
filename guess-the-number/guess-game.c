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
    int secretNumber = rand() % 100;
    char input[2];
    int guess;
    int attempts = 0;

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%s", &input);
        guess = atoi(input);
        if (!isdigit(input[0]))
        {
            printf("Invalid input. Please enter a number between 1 and 100\n");
            continue;
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