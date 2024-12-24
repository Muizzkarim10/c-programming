#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int main()
{

    resetBoard();

    // fill the hidden board random letters
    srand(time(NULL));
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cards[i][j] = letters[rand() % 36];
        }
    }

    int turn = 0;
    int player_moves = 0;
    while (1)
    {
        printBoard();
        printf("Player %d: Enter the coordinate (e.g B3): \n>", turn + 1);
        char input[3];
        scanf("%s", input);

        int row = atoi(&input[1]);
        int col = input[0];
        switch (input[0])
        {
        case 'A':
            col = 0;
            break;
        case 'B':
            col = 1;
            break;
        case 'C':
            col = 2;
            break;
        case 'D':
            col = 3;
            break;
        case 'E':
            col = 4;
            break;
        case 'F':
            col = 5;
            break;
        default:
            col = -1;
            break;
        }

        if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        {
            board[row][col] = cards[row][col];
            printBoard();
            player_moves++;
            if (player_moves == 2)
            {
                checkPairs(row, col, turn);
                player_moves = 0;
                turn = (turn + 1) % PLAYERS;
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid coordinate.\n");
        }
    }
    return 0;
}

// fills the board with hastags
void resetBoard()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            board[i][j] = '#';
        }
    }
}

void printBoard()
{
    printf("Player 1 score : %d\n", player_one);
    printf("Player 1 score : %d\n", player_two);
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
    static int last_row = -1;
    static int last_col = -1;
    static int last_turn = -1;
    static int first_reveal = 1;

    if (first_reveal == 1)
    {
        last_col = col;
        last_row = row;
        last_turn = turn;
        first_reveal = 0;
    }
    else
    {
        if (cards[last_row][last_col] == cards[row][col])
        {
            printf("Match Found!");
            cards[last_row][last_col] = ' ';
            cards[row][col] = ' ';

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
            printf("No Match Found!");
            board[last_row][last_col] = '#';
            board[row][col] = '#';
        }
        first_reveal = 1;
    }
}