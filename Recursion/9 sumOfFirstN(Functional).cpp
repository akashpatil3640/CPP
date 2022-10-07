#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
	if(n<=0)
	{
		
		return 0;
	}
	
	return n+f(n-1); //functional means without printing the value just return it to calling function
	
	

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