// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> column;
vector<int> diag1;
vector<int> diag2;
int n = 4;
int number = 0;
vector<vector<int>> board = vector<vector<int>>(n, vector<int>(n, 0));

void print_board(){
    cout << "board: \n";
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";  // Print each element in the board
        }
        cout << "\n \n";  // Move to the next line after printing each row
    }
}

int queen(int y){
    if(y == n){
        number ++;
        print_board();
        return number;
    }
    for(int i = 0; i<n; i++){
        if(column[i] || diag1[i+y] || diag2[n-1+y-i]) continue;
        column[i]= diag1[i+y]=diag2[n-1+y-i] = 1;
        board[y][i] = 1;  // Mark the board

        queen(y+1);
        column[i]= diag1[i+y]=diag2[n-1+y-i] = 0;
        board[y][i] = 0;  // Unmark the board
    }
    return number;
}


int main() {
    column = vector<int>(n, 0);  // Track if a column has a queen
    diag1 = vector<int>(2 * n - 1, 0);  // Track the major diagonals
    diag2 = vector<int>(2 * n - 1, 0);  // Track the minor diagonals
    queen(0);
    cout << "number of solutions:  "<< number;
    return 0;
}