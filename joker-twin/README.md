# Joker Twin Game

## Overview

The Joker Twin Game is a memory card game where players take turns revealing pairs of cards on a board. The goal is to find matching pairs of cards. The game includes a special joker card that can affect the scoring.

## Features

- Two-player game
- Randomly shuffled cards
- Score tracking for each player
- Special joker card that affects scoring

## How to Play

1. The game starts with a 6x6 board of cards, all face down.
2. Players take turns revealing two cards at a time.
3. If the cards match, the player scores a point and the cards remain face up.
4. If the cards do not match, they are turned face down again.
5. The game continues until all pairs are found.
6. The player with the most points at the end of the game wins.

## Code Structure

### main.c

The `main.c` file contains the main game loop and handles user input, game logic, and printing the board.

### array_utils.c

The `array_utils.c` file contains utility functions for array operations, such as generating random arrays, calculating sums, and filtering arrays based on a threshold.

### array_utils.h

The `array_utils.h` file contains the function prototypes and documentation for the utility functions in `array_utils.c`.

## Functions

### main.c

- `void resetBoard()`: Resets the game board.
- `void printBoard()`: Prints the current state of the game board.
- `void shuffleLetters()`: Shuffles the letters array.
- `int checkPairs(int row, int col, int turn)`: Checks if the revealed cards form a pair.
- `void endMatch()`: Ends the game and prints the final scores.

### array_utils.c

- `int* generateRandomArray(int size)`: Generates an array of random integers.
- `void printArray(const int *arr, int size)`: Prints the elements of an array.
- `int getSum(int *arr, int size)`: Calculates the sum of the elements in an array.
- `double getMean(const int *arr, int size)`: Calculates the mean of the elements in an array.
- `int getMin(const int *arr, int size)`: Finds the minimum element in an array.
- `int getIndexOfMin(const int *arr, int size)`: Finds the index of the minimum element in an array.
- `int getMax(const int *arr, int size)`: Finds the maximum element in an array.
- `int getIndexOfMax(const int *arr, int size)`: Finds the index of the maximum element in an array.
- `int* filterThreshold(const int *arr, int size, int threshold, int *resultSize)`: Filters the elements of an array based on a threshold.
- `int** createMultiplicationTable(int n, int m)`: Creates a multiplication table.

## Compilation and Execution

To compile the program, use the following commands:

```sh
gcc array_utils.c main.c -o joker-twin