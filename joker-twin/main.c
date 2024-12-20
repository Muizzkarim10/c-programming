#include <stdio.h>

char board[6][6];

void printBoard()
{
    printf("    A   B   C   D   F   G \n");
    printf("  |---+---+---+---+---+---|\n");
    printf("0 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
    printf("1 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
    printf("2 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
    printf("3 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
    printf("4 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
    printf("5 | # | # | # | # | # | # |\n");
    printf("  |---+---+---+---+---+---|\n");
}

int main()
{

    printBoard();
    return 0;
}