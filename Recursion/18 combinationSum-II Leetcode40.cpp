#include <bits/stdc++.h>
using namespace std;
//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q--> print all the unique combination of target int .combination may in any order
//eg.  arr=[1,1,1,2,2], target=4
//o/p--> [[1,1,2],[2,2]]


//technique --> just dont increment the index of take element because it may be repeted

void combinationSumII(int index,vector<int>&ds,int target,vector<int>&arr,vector<vector<int>>&ans)
{
	if(target==0)
	{
		ans.push_back(ds);
		return;
	}

	for(int i=index;i<arr.size();++i)
	{	

		
		//i>index means it is the first element after that the duplicates are not allowed
		//means first element will always be picked up
		//arr[i]==arr[i-1] shows it should not pick same element later
		if(i>index && arr[i]==arr[i-1]) continue;   //imp condition
		
		if(arr[i]>target) break; //means the target is going to negative for that break the current executing loop
		
		ds.push_back(arr[i]); //take
		combinationSumII(i+1,ds,target-arr[i],arr,ans);
		ds.pop_back();
		
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,target;
	cin>>n>>target;
	vector<int>arr(n),ds;
	vector<vector<int>>ans;
	for(int i=0;i<n;++i) cin>>arr[i];

	sort(arr.begin(),arr.end());
	combinationSumII(0,ds,target,arr,ans);

	for(auto i:ans)
	{
		for(auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}

	
	/* code */
	return 0;
}

