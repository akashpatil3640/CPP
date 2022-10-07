#include <bits/stdc++.h>
using namespace std;
//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22

//technique --> return 1 if condition satisfy else 0
//store the returned result in to var and at the end return the result of both the calls
//here we not required additional temp datastructure because we are not printing we just counting
int subsequence(int index, int sum,vector<int>&arr,int k)
{
	if(index >= arr.size())
	{
		if(sum==k)
		{
			
			return 1; //if condi satisfys return 1  to add the sum
		}
		
		return 0; //else return 0
	}
	//subsequence(index+1,temp,arr);  //if you result in reverse order (dont remove pop_back() operation)

	//--------------------main logic take-not take the element-----------------------------


	sum+=arr[index]; //take condition (element included)

	int l=subsequence(index+1,sum,arr,k);// if it returns true return true to calling function
		

	sum-=arr[index];  //not take condition (element excluded) means element will deleted which is previously added
	int r=subsequence(index+1,sum,arr,k); // if it returns true return true to calling function
		

	return l+r; //return sum of not take tree(left) + sum of take tree(right) 

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0;i<n;++i) cin>>arr[i];
	cout<<subsequence(0,0,arr,k);

	/* code */
	return 0;
}

//recursion tree 

/*				arr=[3,1,2]

						          sub(0,[])
						+/ (take)                   -\ (not take)
					    /                             \
                       /                               \
                     sub(1,[3])                      sub(1,[])
               /            \
              /              \
             /                \
			/                  \
           sub(2,[3,1])       sub(2,[3])


Time Complexity = O(2^n * n)
Aux space =O(n)








*/