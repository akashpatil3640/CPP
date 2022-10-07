#include <bits/stdc++.h>
using namespace std;

void f(int n,int sum)
{
	if(n<=0)
	{
		cout<<sum;
		return;
	}
	f(n-1,sum+n);  
	
	

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	f(n,0);
	/* code */
	return 0;
}