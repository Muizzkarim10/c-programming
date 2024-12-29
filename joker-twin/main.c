// Mueez Karim
// Laraib Ali
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

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
int revealed_pairs = 0;

void resetBoard();
void printBoard();
void shuffleLetters();
int checkPairs(int row, int col, int turn);
void endMatch();

int main()
{
    srand(time(NULL));
    resetBoard();
    shuffleLetters();

    // fill the cards array with shuffled letters
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cards[i][j] = letters[k++];
        }
    }

    int turn = 0;
    int player_moves = 0;
    printBoard();

    while (1)
    {
        printf("Player %d: Enter the coordinate (e.g A0): \n>", turn + 1);
        char input[3];
        scanf("%s", input);

        // INPUT VALIDATIONS
        if (!isdigit(input[1]))
        {
            printf("Invalid input. Please enter a valid coordinate.\n");
            continue;
        }
        if (!isupper(input[0]))
        {
            printf("Invalid input. Letter should be Uppercase (e.g A0).\n");
            continue;
        }

        // converting input to coordinates
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
            if (board[row][col] == '#')
            {
                board[row][col] = cards[row][col];
                printBoard();
                int pair_found = checkPairs(row, col, turn);
                player_moves++;
                if (player_moves == 2)
                {
                    player_moves = 0;
                    if (!pair_found)
                    {
                        turn = (turn + 1) % PLAYERS;
                    }
                }
            }
            else
            {
                printf("Invalid input. The card is already revealed.\n");
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid coordinate.\n");
        }

        // All pairs revealed
        // one less pair due to joker
        if (revealed_pairs == 17)
        {
            // if jokers remain at the end
            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLS; j++)
                {
                    if (board[i][j] == '#')
                    {
                        board[i][j] = cards[i][j];
                        if (turn == 0)
                        {
                            player_one++;
                        }
                        else
                        {
                            player_two++;
                        }
                    }
                }
            }
            printBoard();
            endMatch();
            break;
        }

        Sleep(2000);
        system("cls");
        printBoard();
    }
    return 0;
}

// Shuffle the letters array
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

// Fill the board with '#'
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
    printf("   Player 1 score : %d\n", player_one);
    printf("   Player 2 score : %d\n", player_two);
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

int checkPairs(int row, int col, int turn)
{
    static int last_row = -1;
    static int last_col = -1;
    static int first_reveal = 1;

    char second_card = cards[row][col];
    second_card = tolower(second_card);

    char first_card = cards[last_row][last_col];
    first_card = tolower(first_card);

    if (first_reveal == 1)
    {
        last_col = col;
        last_row = row;
        first_reveal = 0;
        return 0; // No pair found yet
    }
    else
    {
        if (first_card == '*' || second_card == '*')
        {
            printf("Joker revealed!\n");
            revealed_pairs++;
            // removes joker and other card
            board[last_row][last_col] = ' ';
            board[row][col] = ' ';

            // removes the pair of other card
            char other_card;
            if (first_card == '*')
            {
                other_card = second_card;
            }
            else
            {
                other_card = first_card;
            }

            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLS; j++)
                {
                    if (tolower(cards[i][j]) == other_card)
                    {
                        board[i][j] = ' ';
                    }
                }
            }

            if (turn == 0)
            {
                player_one += 2;
            }
            else
            {
                player_two += 2;
            }
            first_reveal = 1;
            return 1; // Pair found
        }
        else
        {
            if (first_card == second_card)
            {
                revealed_pairs++;
                board[last_row][last_col] = ' ';
                board[row][col] = ' ';
                printf("Pairs Revealed!\n");

                if (turn == 0)
                {
                    player_one++;
                }
                else
                {
                    player_two++;
                }
                first_reveal = 1;
                return 1; // Pair found
            }
            else
            {
                printf("No Match Found!\n");
                board[last_row][last_col] = '#';
                board[row][col] = '#';
                first_reveal = 1;
                return 0; // No pair found
            }
        }
    }
}

void endMatch()
{
    printf("Game Over!\n");
    printf("Player 1 score: %d\n", player_one);
    printf("Player 2 score: %d\n", player_two);

    if (player_one > player_two)
    {
        printf("Player 1 wins!\n");
    }
    else if (player_two > player_one)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
}
