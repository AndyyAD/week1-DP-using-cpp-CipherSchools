#include <bits/stdc++.h>
using namespace std;

// Rat in a maze
// int xMoves[] = {0,0,1,-1};
// int yMoves[] = {1,-1,0,0};

// bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y, const int &R, const int &C){
//     return ((x >= 0 and x < R and y >= 0 and y < C) and !visited[x][y] and mat[x][y] == 1);
// }

// bool ratInMaze(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y, const int &R, const int &C){
//     if(x==R-1 and y==C-1 and mat[R-1][C-1] == 1){
//         visited[x][y] = true;
//         return true;
//     }
//     if (isSafe(mat, visited, x, y, R, C)){
//         visited[x][y] = true;
//         for (int i = 0; i < 4; i++){
//             int nextX = x + xMoves[i];
//             int nextY = y + yMoves[i];
//             if(ratInMaze(mat, visited, nextX, nextY, R, C)) {
//                 return true;
//             }
//         }
//         visited[x][y] = false;
//     }
//     return false;
// }

// bool ratInMaze(vector<vector<int>> &mat) {
//     int R = mat.size();
//     if (R == 0){
//         return true;
//     }
//     int C = mat[0].size();
//     vector<vector<bool>> visited(R, vector<bool> (C, false));
//     return ratInMaze(mat, visited, 0, 0, R, C);
// }

// unique path 3

// int M, N, eCount=1, res=0;
// int uniquePathsIII(vector<vector<int>>& grid) {
//     M = grid.size(), N=grid[0].size();
//     int x, y;
//     for (int i=0; i < M; i++)
//         for (int j=0; j<N; j++){
//             if (grid[i][j] ==1) x= i, y=j;
//             else if (grid[i][j] ==0) eCount++;
//         }

//     DFS(grid, x,y,0);
//     return res;        
// }

// void DFS(vector<vector<int>>& g, int i, int j,int count){
//     if ( i < 0 || i >= M ||  j < 0 || j >= N || g[i][j] == -1) return;

//     if(g[i][j] == 2){
//         if (count == eCount) res++;
//         return;
//     }
//     g[i][j] = -1;
//     count++;
//     DFS(g,i+1,j,count);
//     DFS(g,i-1,j,count);
//     DFS(g,i,j+1,count);
//     DFS(g,i,j-1,count);
//     g[i][j] = 0;
// }

// n-queens

bool isSafe(vector<vector<bool>> &Chess, int x, int y, const int &N) {
    for (int i = x; i >= 0; i--){
        if(Chess[i][y]) {
            return false;
        }
    }
    for (int i = x, j = y; i>= 0 and j >= 0; i--, j--){
        if(Chess[i][y]){
            return false;
        }
    }
    for(int i = x, j = y; i < N and j >= 0; i++, j--){
        if(Chess[i][y]){
            return false;
        }
    }
    return true;
}

bool NQueens(vector<vector<bool>> &Chess, int y, const int &N) {
    if(y==0){
        return true;
    }
    for(int x=0; x<N; x++){
        if(isSafe(Chess, x, y, N)){
            Chess[x][y] = true;
            if(NQueens(Chess, y+1, N)){
                return true;
            }
            Chess[x][y] = false;
        }
    }
    return false;
}

vector<vector<bool>> NQueen(int N){
    vector<vector<bool>> Chess(N, vector<bool>(N, false));
    NQueens(Chess, 0, N);
    return Chess;
}

int main() {
    
    return 0;
}