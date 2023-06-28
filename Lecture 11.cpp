#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, char value){
    int n = board.size();

    for (int i = 0; i < n; i++){
        if (board[row][i] == value){
            return false;
        }
        if (board[i][col] == value){
            return false;
        }
        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value){
            return false;
        }
    }
    return true;
}

bool isValidSudoku(vector<vector<char>> &board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') {
                for (char value = '1'; value <= '9'; value++) {
                    if (isSafe(board, i, j, value)) {
                        board[i][j] = value;
                        bool nextsolution = isValidSudoku(board);
                        if (nextsolution == true)
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {
    
    return 0;
}