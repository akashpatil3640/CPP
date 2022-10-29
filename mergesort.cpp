//deepak s. patil
//merge sort

#include<stdio.h>
int mergepass(int A[],int N,int L,int B[]);
int mergesort(int A[],int N);
int merge(int A[],int L,int lb,int m[],int k,int C,int B[],int LB);


int main()
{
    int N;
    
    printf("enter the size of array :\n");
    scanf("%d",&N);
    
    int a[N],b[N],i,j,L;
    
    return 0;
}
int mergesort(int A[],int N)
{
    int L,i,B[N];
    L=0;
    for(i=0;i<N;i++)
    {
        mergepass(A,N,L,B);
        mergepass(B,N,2*L,A);
        L=4*L;
    }
    return 0;
}
int mergepass(int A[],int N,int L,int B[])
{
    int q,s,r,j,lb;
    
    q=(int)(N/(2*L));
    s=2*L*q;
    r=N-s;
    
    for(j=0;j<N;j++)
    {
        lb=1+(2*j-2)*L;
        merge(A,L,lb,A,L,lb+L,B,lb);
    }
    if(r<=L)
    {
        for(j=0;j<r;j++)
        {
            B[s+j]=A[s+j];
        }
    }
    else
    {
        merge(A,L,s+1,A,r,L+s+1,B,s+1);
    }
    return 0;
}
int merge(int A[],int L,int lb,int m[],int k,int C,int B[],int LB)
{
    
}