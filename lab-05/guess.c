#include <stdio.h>

int main(void)
{

    int drinks = 10;
    int guess = 0;

    printf("Guess the number of drinks: \n> ");
    scanf("%d", &guess);

    if (guess < drinks + 2 && guess > drinks - 2)
    {
        printf("Your guess is right, you win!");
    }
    else
    {
        printf("Wrong Answer.");
    }

    return 0;
}
