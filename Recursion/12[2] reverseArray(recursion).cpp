#include <bits/stdc++.h>
using namespace std;

void reverseFun(int l,int n, int arr[])
{
	if(l >= n/2)
	{

		return;
	}

	// int temp;
	// temp=arr[l];
	// arr[l]=arr[n-l-1];
	// arr[n-l-1]=temp;

	swap(arr[l],arr[n-l-1]);
	reverseFun(l+1,n,arr);

	

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[5]={1,2,3,4,5};
	reverseFun(0,5,arr); //array passed using pass by referance only
	for(int i=0;i<5;++i) cout<<arr[i];

	/* code */
	return 0;
}