#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q--> Input: n = 4
//Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
//Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above


void solve(int col,vector<string> &board, vector<int>&leftRow,vector<int>&lowerDiagonal,vector<int>&upperDiagonal, vector<vector<string>>&ans ,int n )
{
	if(col==n)
	{
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++)
	{
		if(leftRow[row]==0 && upperDiagonal[n-1+col-row]==0 && lowerDiagonal[row+col]==0)
		{
			board[row][col]='Q';
			leftRow[row]=1;
			lowerDiagonal[row+col]=1;
			upperDiagonal[n-1+col-row]=1;
			solve(col+1,board,leftRow,lowerDiagonal,upperDiagonal,ans,n);
			board[row][col]='.';	
			leftRow[row]=0;
			lowerDiagonal[row+col]=0;
			upperDiagonal[n-1+col-row]=0;
		}
	}
}

vector<vector<string>> solveNQueens(int n)
{
	vector<vector<string>>ans;
	vector<string>board(n);
	vector<int> leftRow(n,0),lowerDiagonal(2*n-1,0),upperDiagonal(2*n-1,0);
	string s(n,'.');
	//cout<<s<<endl;
	for(int i=0;i<n;++i) board[i]=s;

	solve(0,board,leftRow,lowerDiagonal,upperDiagonal,ans,n);
	return ans;
}


int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif */

	int n;
	cin>>n;
	
	vector<vector<string>>akash;
	
	akash=solveNQueens(n);

	for(auto x :akash)
	{
		for(auto y:x)
		{
			cout<<y<<endl;
		}
		cout<<endl;
	}
	
	
	/* code */
	return 0;
}

