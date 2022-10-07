#include <bits/stdc++.h>
using namespace std;

void f(int n)
{
	if(n<=0)
		return;
	cout<<n;
	f(n-1);

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	f(n);
	/* code */
	return 0;
}