#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q--> Input: n = 4
//Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
//Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
bool ifSafe(int row,int col , vector<string> &board,int n)
{
	/*        \
			<--Q  just check these directions whether there is any queen or not if there return false else true
			  /
	*/
	int dupCol=col;
	int dupRow=row;

	//going back upper diagonal
	while(row >=0 && col >=0)
	{
		if(board[row][col]=='Q')
			return false;

		row--;
		col--;
	}

	//going back for center line
	col=dupCol;
	row=dupRow;
	while(col>=0)
	{
		if(board[row][col]=='Q')
			return false;

		col--;
	}

	//going back for lower diagonal
	col=dupCol;
	row=dupRow;
	while(col>=0 && row <n)
	{
		if(board[row][col]=='Q')
			return false;
		col--;
		row++;
	}

	return true;
}

void solve(int col,vector<string> &board, vector<vector<string>>&ans ,int n )
{
	if(col==n)
	{
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++)
	{
		if(ifSafe(row,col,board,n))
		{
			board[row][col]='Q';
			solve(col+1,board,ans,n);
			board[row][col]='.';
			//cout<<"hiii";
		}
	}
}

vector<vector<string>> solveNQueens(int n)
{
	vector<vector<string>>ans;
	vector<string>board(n);
	string s(n,'.');
	cout<<s<<endl;
	for(int i=0;i<n;++i) board[i]=s;

	solve(0,board,ans,n);
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

