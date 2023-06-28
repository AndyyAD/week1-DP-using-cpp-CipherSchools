#include <bits/stdc++.h>
using namespace std;

// valid sudoku

// bool isSafe(vector<vector<char>> &board, int row, int col, char value){
//     int n = board.size();

//     for (int i = 0; i < n; i++){
//         if (board[row][i] == value){
//             return false;
//         }
//         if (board[i][col] == value){
//             return false;
//         }
//         if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value){
//             return false;
//         }
//     }
//     return true;
// }

// bool isValidSudoku(vector<vector<char>> &board) {
//     int n = board.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (board[i][j] == '.') {
//                 for (char value = '1'; value <= '9'; value++) {
//                     if (isSafe(board, i, j, value)) {
//                         board[i][j] = value;
//                         bool nextsolution = isValidSudoku(board);
//                         if (nextsolution == true)
//                             return true;
//                         else
//                             board[i][j] = '.';
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }

//knight tour (my sol)

bool checkValidGrid(vector<vector<int>>& grid) {
    int dir[8][2] = {{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
    int count = 0, maxCount = grid.size() * grid.size()-1;
    int x = 0, y = 0, i, j;
    if(grid[x][y] != count) return false;
    while(count < maxCount){
        count++;
        int flag = 1;
        for(auto d: dir){
            i = x + d[0]; j = y + d[1];
            if(i >= 0 && j >= 0  && i < grid.size() && j < grid.size() && grid[i][j] == count){ 
                x = i; y = j; flag = 0; break;
            }
        } 
        if(flag) return false;
    }
    return true;
}

int main() {
    
    return 0;
}