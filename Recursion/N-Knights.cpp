/*This is a solution for Given integers M, N and K, the task is to place K knights on an M*N chessboard such that they don’t attack each other. The knights are expected to be placed on different squares on the board. A knight can move two squares vertically and one square horizontally or two squares horizontally and one square vertically. The knights attack each other if one of them can reach the other in single move. There are multiple ways of placing K knights on an M*N board or sometimes, no way of placing them. We are expected to list out all the possible solutions. */

// C++ implementation of the above approach
#include <iostream>
using namespace std;
 
/* m*n is the board dimension
k is the number of knights to be placed on board
count is the number of possible solutions */
int m, n, k;
int count = 0;
 
/* This function is used to create an empty m*n board */
void makeBoard(char** board)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = '_';
        }
    }
}
 
/* This function displays our board */
void displayBoard(char** board)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << " " << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
 
/* This function marks all the attacking
position of a knight placed at board[i][j]
position */
void attack(int i, int j, char a, char** board)
{
 
    /* conditions to ensure that the
    block to be checked is inside the board */
    if ((i + 2) < m && (j - 1) >= 0) {
        board[i + 2][j - 1] = a;
    }
    if ((i - 2) >= 0 && (j - 1) >= 0) {
        board[i - 2][j - 1] = a;
    }
    if ((i + 2) < m && (j + 1) < n) {
        board[i + 2][j + 1] = a;
    }
    if ((i - 2) >= 0 && (j + 1) < n) {
        board[i - 2][j + 1] = a;
    }
    if ((i + 1) < m && (j + 2) < n) {
        board[i + 1][j + 2] = a;
    }
    if ((i - 1) >= 0 && (j + 2) < n) {
        board[i - 1][j + 2] = a;
    }
    if ((i + 1) < m && (j - 2) >= 0) {
        board[i + 1][j - 2] = a;
    }
    if ((i - 1) >= 0 && (j - 2) >= 0) {
        board[i - 1][j - 2] = a;
    }
}
 
/* If the position is empty,
place the knight */
bool canPlace(int i, int j, char** board)
{
    if (board[i][j] == '_')
        return true;
    else
        return false;
}
 
/* Place the knight at [i][j] position
on board */
void place(int i, int j, char k, char a, char** board,
           char** new_board)
{
 
    /* Copy the configurations of
    old board to new board */
    for (int y = 0; y < m; y++) {
        for (int z = 0; z < n; z++) {
            new_board[y][z] = board[y][z];
        }
    }
 
    /* Place the knight at [i][j]
    position on new board */
    new_board[i][j] = k;
 
    /* Mark all the attacking positions
    of newly placed knight on the new board */
    attack(i, j, a, new_board);
}
 
/* Function for placing knights on board
such that they don't attack each other */
void kkn(int k, int sti, int stj, char** board)
{
 
    /* If there are no knights left to be placed,
    display the board and increment the count */
    if (k == 0) {
        displayBoard(board);
        count++;
    }
    else {
 
        /* Loop for checking all the
positions on m*n board */
        for (int i = sti; i < m; i++) {
            for (int j = stj; j < n; j++) {
 
                /* Is it possible to place knight at
[i][j] position on board? */
                if (canPlace(i, j, board)) {
 
                    /* Create a new board and place the
                    new knight on it */
                    char** new_board = new char*[m];
                    for (int x = 0; x < m; x++) {
                        new_board[x] = new char[n];
                    }
                    place(i, j, 'K', 'A', board, new_board);
 
                    /* Call the function recursively for
                    (k-1) leftover knights */
                    kkn(k - 1, i, j, new_board);
 
                    /* Delete the new board
                    to free up the memory */
                    for (int x = 0; x < m; x++) {
                        delete[] new_board[x];
                    }
                    delete[] new_board;
                }
            }
            stj = 0;
        }
    }
}
 
// Driver code
int main()
{
    m = 4, n = 3, k = 6;
 
    /* Creation of a m*n board */
    char** board = new char*[m];
    for (int i = 0; i < m; i++) {
        board[i] = new char[n];
    }
 
    /* Make all the places are empty */
    makeBoard(board);
 
    kkn(k, 0, 0, board);
 
    cout << endl << "Total number of solutions : " << count;
    return 0;
}