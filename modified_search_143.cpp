//name : deepak s. patil
//roll no : 143
//program for modified linear search algorithm.
//28-09-2020 16:28

#include<stdio.h>

int main()
{
    int size;
    
    printf("enter the size of an array :\n");
    scanf("%d",&size);
    
    int data[size+1],i,item,LOC=0;
    
    printf("enter the %d elements of an array:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("enter the element for searching :\n");
    scanf("%d",&item);
    data[size+1]=item;
    
    for(i=0;i<size+1;i++)
    {
        if(data[i] != item)
        {
            LOC+=1;
        }
        else
        {
            LOC=i+1;
            break;
        }
    }
    
    if(LOC==size+1)
    {
        printf("the item is not in an array.");
    }
    else
    {
        printf("item found at location %d",LOC);
    }
}