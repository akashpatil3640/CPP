#include <bits/stdc++.h>
using namespace std;
//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//Q--> print the sum of all the subsets of the given array in the assending order
//eg. [3,1,2]--{{},{3},{1},{2},{3,1},{3,2},{1,2},{3,1,2}}==2^(no. of ele)=8
//therefore sum of each sub set is given by-->[0,3,1,2,4,5,3,6];
//in ascending order the result will be --->[0,1,2,3,3,4,5,6]

//technique --> just dont increment the index of take element because it may be repeted

void subsetSumI(int index,int sum,vector<int>&arr,vector<int>&ans)
{
	if(index>=arr.size())
	{
		ans.push_back(sum);
		return;
	}

	//take
	//sum=sum+arr[index];
	subsetSumI(index+1,sum+arr[index],arr,ans);
	//sum=sum-arr[index];

	//not take
	subsetSumI(index+1,sum,arr,ans);
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
	vector<int>ans;
	for(int i=0;i<n;++i) cin>>arr[i];

	
	subsetSumI(0,0,arr,ans);

	sort(ans.begin(),ans.end());

	for(auto i :ans)
	{
		
		cout<<i<<" ";
	}

	
	/* code */
	return 0;
}

