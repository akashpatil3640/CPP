#include <bits/stdc++.h>
using namespace std;

void fibo(int cur, int pre,int n)
{
	cout<<pre<<"\t";
	cout<<cur<<"\t";
	
	for(int i=0;i<n;++i)
	{
		int temp=cur;
		cur=cur+pre;
		pre=temp;
		cout<<cur<<"\t";

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
	string str="madamo";
	fibo(1,0,n);

	/* code */
	return 0;
}