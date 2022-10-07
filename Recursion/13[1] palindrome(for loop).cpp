#include <bits/stdc++.h>
using namespace std;

bool isPal(int n, string str)
{

	for(int i=0;i<n;++i)
	{
		if(i<=n/2)
		{
			if(str[i]!=str[n-i-1])
			{
				return 0;
			}
		}
		else
			return 1;
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
	cout<<isPal(6,str);

	/* code */
	return 0;
}