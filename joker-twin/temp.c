#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROWS 6
#define COLS 6
#define PLAYERS 2

char board[ROWS][COLS];
char cards[ROWS][COLS];
char letters[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'A', 'B', 'C', 'D',
                    'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                    'O', 'P', 'Q', '*', '*'};
int player_one = 0, player_two = 0;

void resetBoard();
void printBoard();
void checkPairs(int row, int col, int turn);
void shuffleLetters();

int main()
{
    resetBoard();
    shuffleLetters();

    // Fill the hidden board with random letters
    int k = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cards[i][j] = letters[k++];
        }
    }

    int turn = 0;
    int player_moves = 0;

    while (1)
    {
        printBoard();
        printf("Player %d: Enter the coordinate (e.g., B3): \n>", turn + 1);
        char input[3];
        scanf("%s", input);

        // Validate input
        if (strlen(input) != 2 || input[0] < 'A' || input[0] > 'F' || input[1] < '0' || input[1] >= '6')
        {
            printf("Invalid input. Please enter a valid coordinate.\n");
            continue;
        }

        int row = input[1] - '0';
        int col = input[0] - 'A';

        if (board[row][col] != '#')
        {
            printf("This card is already revealed. Try another one.\n");
            continue;
        }

        board[row][col] = cards[row][col];
        printBoard();
        player_moves++;

        if (player_moves == 2)
        {
            checkPairs(row, col, turn);
            player_moves = 0;

            // Check if the game is over
            if (player_one + player_two == (ROWS * COLS) / 2)
            {
                printf("Game Over! Final Scores:\n");
                printf("Player 1: %d\n", player_one);
                printf("Player 2: %d\n", player_two);
                break;
            }

            turn = (turn + 1) % PLAYERS;
        }
    }
    return 0;
}

void resetBoard()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            board[i][j] = '#';
        }
    }
}

void printBoard()
{
    printf("Player 1 score : %d\n", player_one);
    printf("Player 2 score : %d\n", player_two);
    printf("    A   B   C   D   E   F \n");
    printf("  +---+---+---+---+---+---+\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("%d |", i);
        for (int j = 0; j < COLS; j++)
        {
            printf(" %c |", board[i][j]);
        }
        printf("\n");
        printf("  +---+---+---+---+---+---+\n");
    }
    printf("\n");
}

void checkPairs(int row, int col, int turn)
{
    static int last_row = -1, last_col = -1;
    static int first_reveal = 1;

    if (first_reveal)
    {
        last_row = row;
        last_col = col;
        first_reveal = 0;
    }
    else
    {
        if (cards[last_row][last_col] == cards[row][col])
        {
            printf("Match Found!\n");
            if (turn == 0)
            {
                player_one++;
            }
            else
            {
                player_two++;
            }
        }
        else
        {
            printf("No Match Found!\n");
            board[last_row][last_col] = '#';
            board[row][col] = '#';
        }
        first_reveal = 1;
    }
}

void shuffleLetters()
{
    for (int i = 0; i < 36; i++)
    {
        int j = rand() % 36;
        char temp = letters[i];
        letters[i] = letters[j];
        letters[j] = temp;
    }
}
