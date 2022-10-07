#include <bits/stdc++.h>
using namespace std;

void reverse()
{
	int n=7;
	int arr[n]={1,2,3,9,5,6,4};
	

	for(int i=0;i<n;++i)
	{
		if(i < n-i-1)
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[n-i-1];
			arr[n-i-1]=temp;


		}
		else
			break;
		
	}
	for(int i=0;i<n;++i) cout<<arr[i]<<endl;
	

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	reverse();

	/* code */
	return 0;
}