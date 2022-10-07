#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
	if(n<=0)
	{
		
		return 0;
	}
	
	return n+f(n-1);
	
	

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	cout<<f(n);

	/* code */
	return 0;
}