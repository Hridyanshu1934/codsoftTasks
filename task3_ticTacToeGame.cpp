#include <iostream>
using namespace std;

void displayGrid(char grid[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------\n";
    }
    cout << endl;
}

bool checkWin(char grid[3][3], char player) {
    for (int i = 0; i < 3; ++i) {
        if ((grid[i][0] == player && grid[i][1] == player && grid[i][2] == player) ||
            (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player)) {
            return true;
        }
    }
    if ((grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) ||
        (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player)) {
        return true;
    }
    return false;
}

bool isDraw(char grid[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] != 'X' && grid[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char grid[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char currentPlayer;
    cout<<"Choose X or O"<<endl;
    cin>>currentPlayer;
    int position;

    displayGrid(grid);

    while (true) {
        cout << "Player " << currentPlayer << ", enter your position (1-9): ";
        cin >> position;
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (position < 1 || position > 9 || grid[row][col] == 'X' || grid[row][col] == 'O') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        grid[row][col] = currentPlayer;
        displayGrid(grid);

        if (checkWin(grid, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isDraw(grid)) {
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
