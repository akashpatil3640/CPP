#include <bits/stdc++.h>
using namespace std;
//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 28/6/22
//technique --> as soon the condition is satisfied return the true else return false
//and calling of recursive function is handled if it returns true --> return true such that no further calls will happen
//else return false for next call
bool subsequence(int index, vector<int>&temp , int sum,vector<int>&arr,int k)
{
	if(index >= arr.size())
	{
		if(sum==k)
		{
			for(auto it:temp)
			{
				cout<<it<<" ";
			}

			if(temp.size()==0)
			{
				cout<<"{}";
			}
			cout<<endl;

			return true;
		}
		
		return false;
	}
	//subsequence(index+1,temp,arr);  //if you result in reverse order (dont remove pop_back() operation)

	//main logic take-not take the element
	sum+=arr[index];
	temp.push_back(arr[index]); //take condition (element included)

	if(subsequence(index+1,temp,sum,arr,k)==true) // if it returns true return true to calling function
		return true;

	sum-=arr[index];
	temp.pop_back(); //not take condition (element excluded) means element will deleted which is previously added
	if(subsequence(index+1,temp,sum,arr,k)==true) // if it returns true return true to calling function
		return true;

	return false;

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	vector<int>arr(n),temp;
	for(int i=0;i<n;++i) cin>>arr[i];
	subsequence(0,temp,0,arr,k);

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