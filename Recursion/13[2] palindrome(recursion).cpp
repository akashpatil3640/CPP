#include <bits/stdc++.h>
using namespace std;

bool isPal(int l,int n, string str)
{
	
	if(l>=n/2)
	{
		return 1;
	}
	if(str[l]==str[n-l-1])
		return isPal(l+1,n,str);
	else
		return 0;

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
	cout<<isPal(0,6,str);

	/* code */
	return 0;
}