#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void printBoard();
void fillBoard();

char seats[10][10];

int main()
{
    fillBoard();
    printBoard();
}

void fillBoard()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            seats[i][j] = 'o';
        }
    }
}

void printBoard()
{
    printf("+--------------+\n");
    printf("| Available: o |\n| Reserved: x  |\n");
    printf("+--------------+\n");
    printf("    A   B   C   D   E   F   G   H   I   J\n");
    printf("  +---+---+---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d |", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf(" %c |", seats[i][j]);
        }
        printf("\n");
        printf("  +---+---+---+---+---+---+---+---+---+---+\n");
    }
    printf("\n");
}