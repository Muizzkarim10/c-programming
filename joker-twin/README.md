
# Memory Matching Game in C

## Overview
This is a **two-player memory card-matching game** built in C. Players take turns revealing cards on a 6x6 board, aiming to find matching pairs. The game includes special joker cards (`*`) for added strategy and fun.

---

## Features
- **Dynamic Gameplay**: Cards are shuffled for a new game every time.
- **Turn-Based Logic**: Players alternate turns to reveal cards.
- **Score Tracking**: Keeps track of player scores throughout the game.
- **Special Joker Mechanic**: Joker cards can remove themselves and matching pairs.
- **Robust Input Validation**: Ensures valid coordinates and input format.

---

## How to Play
1. Clone this repository and compile the code using a C compiler (e.g., `gcc`).
2. Run the program:
   ```bash
   ./memory_game
   ```
3. Follow the prompts:
   - Enter a coordinate (e.g., `B3`) to reveal a card.
   - Match pairs to earn points.
   - Special joker cards can remove themselves and their pair.
4. The game ends when all 17 pairs (including jokers) are revealed.
5. The player with the highest score wins!

---

## Input Format
- Enter coordinates in the format: `<Column><Row>` (e.g., `B3`).
  - **Column**: An uppercase letter from `A` to `F`.
  - **Row**: A digit from `0` to `5`.

---

## Functions
### `resetBoard()`
- Initializes the board by filling all cells with `#`.

### `printBoard()`
- Displays the current state of the board, including scores and revealed cards.

### `shuffleLetters()`
- Randomly shuffles the card letters, ensuring a new board layout for each game.

### `checkPairs(row, col, turn)`
- Handles logic for:
  - Matching cards.
  - Special joker behavior.
  - Scoring.

### `endMatch()`
- Declares the winner and displays final scores when all pairs are revealed.

---

## Example Output
```
   Player 1 Score: 2   |   Player 2 Score: 3
     A   B   C   D   E   F
   +---+---+---+---+---+---+
 0 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
 1 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
 2 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
 3 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
 4 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
 5 | # | # | # | # | # | # |
   +---+---+---+---+---+---+
```

---

## Future Enhancements
- Add a single-player mode with a timer.
- Introduce difficulty levels (e.g., larger board sizes).
- Save and load game progress for interrupted sessions.

---

## License
This project is open-source. Feel free to fork, modify, and improve it as needed.

---

## Contributing
Pull requests are welcome. For major changes, please open an issue to discuss what you would like to change.

---
