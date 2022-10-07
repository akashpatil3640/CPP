#include<iostream>
using namespace std;

//templates in cpp.
//bubble sort template in cpp.

template <typename T>
void bubblesort(T *x,int count)
{
	register int a,b;//using register for faster execution.
	T t;
	
	for(a=1;a<count;a++)
	{
		for(b=count-1;b>=a;b--)
		{
			if(x[b-1]>x[b])
			{
				//exchange elements
				t=x[b-1];
				x[b-1]=x[b];
				x[b]=t;
			}
		}
	}
};

int main()
{
	int arrayi[7]={3,4,2,1,6,5,7};
	double arrayd[7]={3.4,4.6,2.2,-1,6.8,5.1,7.9};
	
	int i;
	cout<<"unsorted integer array is :"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<arrayi[i]<<' ';
	}
	cout<<endl;
	
	cout<<"unsorted double array is :"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<arrayd[i]<<' ';
	}
	cout<<endl;
	
	bubblesort(arrayi,7);
	bubblesort(arrayd,7);
	
	cout<<"sorted integer array is :"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<arrayi[i]<<' ';
	}
	cout<<endl;
	
	cout<<"sorted double array is :"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<arrayd[i]<<' ';
	}
	cout<<endl;
}
