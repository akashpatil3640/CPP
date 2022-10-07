#include <bits/stdc++.h>
using namespace std;
//AKASH DINKAR PATIL , ROLL 136 TY.B.TECH CSE DIV-B 26/6/22
//a subsequence is nothing but printing all the possible values in same direction
//eg. [3,1,2]--> {},{3},{1},{2},{3,1},{1,2},{3,2},{3,1,2}   ==> no.of subsequences=pow(2,length of array (3))=8
//here {1,3},{2,1},{2,3}.......  are not possible because they are not in order of the array.
//**##technique is to take and not take the element
void subsequence(int index, vector<int>&temp ,vector<int>&arr)
{
	if(index >= arr.size())
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
		return;
	}
	//subsequence(index+1,temp,arr);  //if you result in reverse order (dont remove pop_back() operation)

	//main logic take-not take the element
	temp.push_back(arr[index]); //take condition (element included)
	subsequence(index+1,temp,arr);

	temp.pop_back();
	subsequence(index+1,temp,arr); //not take condition (element excluded) means element will deleted which is previously added


}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>arr(n),temp;
	for(int i=0;i<n;++i) cin>>arr[i];
	subsequence(0,temp,arr);

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