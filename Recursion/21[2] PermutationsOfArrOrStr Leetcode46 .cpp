#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q-->  Print all the permutitions of string or array
//eg. [1,2,3]-->[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]--> total 6 permutations
// total permutations --> n!=3!=3*2*1=6


void permutApp2(int index,vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans)
{
	if(index==arr.size())
	{
		ans.push_back(arr);
		return;
	}

	for(int i=index;i<arr.size();++i)
	{
		swap(arr[i],arr[index]); //swap
		permutApp2(index+1,ds,arr,ans);
		swap(arr[i],arr[index]); //backtrack
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>arr(n);
	vector<int>ds;
	vector<vector<int>>ans;

	

	for(int i=0;i<n;++i) cin>>arr[i];

	
	permutApp2(0,ds,arr,ans);


	for(auto i :ans)
	{
		
		for(auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}

	
	/* code */
	return 0;
}

