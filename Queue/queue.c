#include<stdio.h>
//queue
static int front=-1;
static int rear=-1;

void enque(int queue[],int size)
{
	if(rear==size-1)
	{
		printf("Queue Overflow\n");
		return;
	}
	else if(front==-1)
	{
		int item;
		printf("Enter item\n");
		scanf("%d",&item);

		front++;
		rear++;
		queue[rear]=item;	
		printf("%d inserted successfully\n",item);
	}
	else
	{
		int item;
		printf("Enter item\n");
		scanf("%d",&item);

		rear++;
		queue[rear]=item;
		printf("%d inserted successfully\n",item);
	}
	return;
}

void deque(int queue[])
{
	if(front==-1 || front>rear)
	{
		printf("Queue Underflow\n");
		return;
	}
	else
	{
		int item=queue[front];
		front++;
		printf("%d deque successful\n",item);
	}
	return;
}

void display(int queue[])
{
	if(front==-1)
	{
		printf("Queue Empty\n");
		return;
	}
	for(int i=front;i<=rear;i++)
	{
		printf("%d\t",queue[i]);
	}
	printf("\n");
}

int main()
{
	int size;

	printf("Enter size of queue\n");
	scanf("%d",&size);

	int queue[size];

	int ch;
	do{
		printf("Enter Your choice\n");
		printf("1.Enque\n2.Deque\n3.Display\n4.Exit\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				enque(queue,size);
				break;
			case 2:
				deque(queue);
				break;
			case 3:
				display(queue);
				break;
			case 4:
				break;
			default:
				printf("Enter a valid choice\n");
		}
	}while(ch!=4);
	return 0;	
}