#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q-->  Print all the permutitions of string or array
//eg. [1,2,3]-->[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]--> total 6 permutations
// total permutations --> n!=3!=3*2*1=6


void permutApp1(vector<int>&ds,int flag[],vector<int>&arr,vector<vector<int>>&ans)
{
	if(ds.size()==arr.size())
	{
		ans.push_back(ds);
		return;
	}

	for(int i=0;i<arr.size();++i)
	{
		if(!flag[i])
		{
			flag[i]=1;
			ds.push_back(arr[i]);
			permutApp1(ds,flag,arr,ans);
			ds.pop_back();
			flag[i]=0;
		}
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

	int flag[arr.size()];
	for(int i=0;i<n;++i) flag[i]=0;

	for(int i=0;i<n;++i) cin>>arr[i];

	
	permutApp1(ds,flag,arr,ans);


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

