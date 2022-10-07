//name : deepak s. patil
//roll no : 143
//program for the insertion sort.

#include<stdio.h>

int main()
{
    int N,ptr,temp,i;
    
    printf("enter the size of data :\n");
    scanf("%d",&N);
    
    int data[N];
    
    printf("enter the data :\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
    }
    
    for(i=1;i<N;i++)
    {
        temp=data[i];
        ptr=i-1;
        while(temp<data[ptr] && ptr>=0 )
        {
            data[ptr+1]=data[ptr];
            ptr=ptr-1;
        }
        data[ptr+1]=temp;
    }
    
    printf("the sorted data is :\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",data[i]);
    }
}