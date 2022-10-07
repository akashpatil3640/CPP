#include <bits/stdc++.h>
using namespace std;

int fact(int n,int res)
{
	if(n<=0)
	{
		cout<<res;
		return 1;
	}
	
	return fact(n-1,res*n); //functional means without printing the value just return it to calling function
	
	

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	fact(n,1);

	/* code */
	return 0;
}