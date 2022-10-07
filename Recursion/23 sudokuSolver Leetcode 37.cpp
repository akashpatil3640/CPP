#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q--> SUDOKU

/*
conditions:
1) every row should contain unique number
2) every col should contain unique number
3) every inner 3x3 squre should contain unique number


*/
//i/p---> 

//[["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
//Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
//Explanation: if found any of the ans just return it

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board); // board contaning entire sudoku with numbers and at empty space use the '.'
    }
    
    bool solve(vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); ++i)  //iterate row
        {
            for(int j=0; j<board[0].size() ;++j)  //iterate col
            {
            	if(board[i][j]=='.')  // if found the empty 
            	{
            		for(char c='1';c<='9';c++)  // iterate the number
	                {
	                    if(isValid(i,j,c,board))  //by inserting the number if the conditions are satisfied then -->
	                    {
	                        board[i][j]=c; // assighns the num to that empty space and
	                        
	                        if(solve(board)==true) // if returns true program going to be returning
	                            return true;
	                        else
	                            board[i][j]='.'; // else backtrack and try another combination
	                    
	                    }
	                }
	                return false;  // used for backtrack condition
            	}  
            }   
            
        }
        return true; // at the end  the end if i and j reach the 8,8 the all the rows and col are filed and program gets terminated
    }
    
    bool isValid(int row,int col,char c,vector<vector<char>>&board)
    {
        for(int i=0;i<9;++i)
        {
            if(board[i][col]==c)  //checking num row wise from row number 0 to 8 
                return false;
            
            if(board[row][i]==c)  //checking num col wise from col number 0 to 8 
                return false;
            
            if(board[ 3 * (row / 3)+ i / 3 ][ 3 * (col / 3) + i%3 ]==c)  //checking inner squres (3x3)  ******imp logic 
            {
                return false;
            }
        }
        return true;
    }
};


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	vector<vector<char>>inp;
	
	//akash=solveNQueens(n);

	for(int i=0;i<9;++i)
		for(int j=0;j<9;++j)
			cin>>inp[i][j];

/*
	for(auto x: inp)
	{
		for(auto y:x)
		{
			cout<<y<<' ';
		}
		cout<<endl;
	}
	
	*/
	/* code */
	return 0;
}

