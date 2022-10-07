#include <bits/stdc++.h>
using namespace std;

void f(int n)
{
	if(n<1)
		return;
	f(n-1);  //dont us i+1
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
	f(n);
	/* code */
	return 0;
}
