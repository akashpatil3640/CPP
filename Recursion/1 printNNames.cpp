#include <bits/stdc++.h>
using namespace std;

void f(int a,int n)
{
	if(a>n)
		return;
	cout<<a;
	f(a+1,n);

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	f(1,n);
	/* code */
	return 0;
}