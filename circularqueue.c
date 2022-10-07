#include<stdio.h>
//circular queue
static int REAR=-1;
static int FRONT=-1;

void enque(int queue[],int size)
{
	if((REAR==size-1 && FRONT==0) || REAR==FRONT-1)
	{
		printf("Queue Overflow\n");
		return;
	}
	else
	{
		if(FRONT==-1)
		{
			FRONT++;
			REAR++;
		}
		else if(REAR==size-1)
		{
			REAR=0;
		}
		else
		{
			REAR++;
		}
		int item;
		printf("Enter Item insert: \n");
		scanf("%d",&item);
		queue[REAR]=item;
		printf("%d inserted successfully\n",item);
	}
	return;
}

void deque(int queue[],int size)
{
	if(FRONT==-1)
	{
		printf("Queue Underflow\n");
		return;
	}
	else
	{
		printf("%d deleted successfully\n",queue[FRONT]);
		if(FRONT==REAR)
		{
			FRONT=-1;
			REAR=-1;	
		}
		else if(FRONT==size-1)
		{
			FRONT=0;
		}
		else
		{
			FRONT++;
		}
	}
	return;
}

void display(int queue[],int size)
{
	printf("%d %d\n",FRONT,REAR);
	if(FRONT==-1)
	{
		printf("Queue Empty\n");
	}
	else
	{
		if(FRONT>REAR)
		{
			printf("Queue:\n");
			for(int i=FRONT;i<size;i++)
			{
				printf("%d\t",queue[i]);
			}
			for(int i=0;i<=REAR;i++)
			{
				printf("%d\t",queue[i]);
			}
			printf("\n");
		}
		else
		{	
			printf("Queue:\n");
			for(int i=FRONT;i<=REAR;i++)
			{
				printf("%d\t",queue[i]);
			}
			// for(int i=0;i<=REAR;i++)
			// {
			// 	printf("%d\t",queue[i]);
			// }
			printf("\n");
		}
	}
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
				deque(queue,size);
				break;
			case 3:
				display(queue,size);
				break;
			case 4:
				break;
			default:
				printf("Enter a valid choice\n");
		}
	}while(ch!=4);
	return 0;	
}