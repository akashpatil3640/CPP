#include <bits/stdc++.h>
using namespace std;

void f(int a,int n)
{
	if(n<=0)
		return;
	f(a,n-1);  //dont us i+1
	cout<<n;	//known AS backtrack
	

}
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/

	int n;
	cin>>n;
	f(1,n);
	/* code */
	return 0;
}
