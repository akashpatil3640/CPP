//name : deepak s. patil
//roll no: 143
//program for selection sort algorithm.

#include<stdio.h>

int main()
{
    int i,n,min,loc,temp,j;
    
    printf("enter the size of an data :\n");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter the data :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    
    printf("the sorted data is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}