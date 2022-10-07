#include<stdio.h>
//stack
int TOP=-1;

void push(int stack[],int item,int size)
{
	if(TOP==size-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		TOP++;
		stack[TOP]=item;
		printf("%d pushed successfully\n",item);
	}
}

void pop(int stack[])
{
	if(TOP==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		TOP--;
		printf("%d popped successfully\n",stack[TOP+1]);
	}
}

void display(int stack[])
{
	if(TOP==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		for(int i=0;i<=TOP ;i++)
		{
			printf("%d\t",stack[i]);
		}
	}
}

int main()
{
	int size;
	printf("Enter the size of Stack\n");
	scanf("%d",&size);

	int stack[size];
	int ch;
	do{
		printf("Enter your choice: \n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter item to push:\n");
				int item;
				scanf("%d",&item);
				push(stack,item,size);
				break;
			case 2:
				pop(stack);
				break;
			case 3:
				display(stack);
				break;
			case 4:
				break;
			default:
				printf("Enter a valid choice\n");
		}
	}while(ch!=4);

	return 0;
}

