#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if(n<=1)
		return n;
	return fibo(n-1)+fibo(n-2);
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
	cout<<fibo(n);

	/* code */
	return 0;
}