Find the longest path in a matrix with given constraints

Given a n*n matrix where all numbers are distinct, find the maximum length path (starting from any cell) such that all cells along the path are in increasing order 
with a difference of 1. 
We can move in 4 directions from a given cell (i, j), i.e., we can move to (i+1, j) or (i, j+1) or (i-1, j) or (i, j-1) with the condition that the adjacent
cells have a difference of 1.
  
Example: 

Input:  mat[][] = {{1, 2, 9}
                   {5, 3, 8}
                   {4, 6, 7}}
Output: 4
The longest path is 6-7-8-9. 
  
// code

#include <bits/stdc++.h>
#define n 3
using namespace std;

int findLongestFromACell(int i, int j, int mat[n][n],
						int dp[n][n])
{
	if (i < 0 || i >= n || j < 0 || j >= n)
		return 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN;

	if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1]))
		x = 1 + findLongestFromACell(i, j + 1, mat, dp);

	if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1]))
		y = 1 + findLongestFromACell(i, j - 1, mat, dp);

	if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j]))
		z = 1 + findLongestFromACell(i - 1, j, mat, dp);

	if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j]))
		w = 1 + findLongestFromACell(i + 1, j, mat, dp);

	return dp[i][j] = max({x, y, z, w, 1});
}

int finLongestOverAll(int mat[n][n])
{
	int result = 1; // Initialize result

	int dp[n][n];
	memset(dp, -1, sizeof dp);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dp[i][j] == -1)
				findLongestFromACell(i, j, mat, dp);

			result = max(result, dp[i][j]);
		}
	}

	return result;
}

int main()
{
	int mat[n][n]
		= { { 1, 2, 9 }, { 5, 3, 8 }, { 4, 6, 7 } };
	cout << "Length of the longest path is "
		<< finLongestOverAll(mat);
	return 0;
}
