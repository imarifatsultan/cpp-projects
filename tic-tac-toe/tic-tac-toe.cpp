#include <iostream>
using namespace std;

char game_matrix[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void display() {
    cout << "Current Board:" << endl;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << game_matrix[r][c] << " ";
        }
        cout << endl;
    }
}

bool check_winner(char mark) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((game_matrix[i][0] == mark && game_matrix[i][1] == mark && game_matrix[i][2] == mark) ||
            (game_matrix[0][i] == mark && game_matrix[1][i] == mark && game_matrix[2][i] == mark)) {
            return true;
        }
    }
    // Check diagonals
    if ((game_matrix[0][0] == mark && game_matrix[1][1] == mark && game_matrix[2][2] == mark) ||
        (game_matrix[0][2] == mark && game_matrix[1][1] == mark && game_matrix[2][0] == mark)) {
        return true;
    }
    return false;
}

void player_choose(int player) {
    char mark = (player == 1) ? 'X' : 'O';
    int choice;
    cout << "Player " << player << ", enter your choice (1-9): ";
    cin >> choice;

    // Update the game matrix
    if (choice >= 1 && choice <= 9) {
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;
        if (game_matrix[row][col] != 'X' && game_matrix[row][col] != 'O') {
            game_matrix[row][col] = mark;
        } else {
            cout << "Invalid move! Try again." << endl;
            player_choose(player);
        }
    } else {
        cout << "Invalid choice! Try again." << endl;
        player_choose(player);
    }
}

int main() {
    int player = 1; // Player 1 starts
    int turns = 0;

    while (true) {
        display();
        player_choose(player);
        turns++;

        if (check_winner((player == 1) ? 'X' : 'O')) {
            display();
            cout << "Player " << player << " wins!" << endl;
            break;
        }

        if (turns == 9) {
            display();
            cout << "It's a draw!" << endl;
            break;
        }

        player = (player == 1) ? 2 : 1; // Switch player
    }

    return 0;
}
