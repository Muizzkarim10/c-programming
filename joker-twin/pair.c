#include <stdio.h>
#include <main.c>

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
                printf("Match Found!\n");

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