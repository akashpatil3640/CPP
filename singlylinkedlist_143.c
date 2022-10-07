//name : deepak s. patil
//roll no : 143
//program for singly linked list.
/*operations :
	1. Insert at Start of SLL
	3. Insert at location in SLL
	4. Insert after or before data in SLL
	5. Insert at End of SLL
	6. Delete at Start of SLL
	7. Delete at location in SLL
	8. Delete the node with given data in SLL
	9. Delete at End of SLL
	10. Traverse the SLL
	11. Search the SLL
*/

#include<stdio.h>
#include<stdlib.h>

void insertstart();
void insertlocation();
void insertafter();
void insertend();
void deletestart();
void deletelocation();
void deletebydata();
void deleteend();
void traverse();
void search();

struct data{
	int roll;
	int age;
	char name[20];
	struct data *next;
};

struct data *new;
struct data *st;
struct data *pr;
struct data *temp;

int main()
{	
	int ch;
	
	do
	{
		printf("which operation you want to perform on SLL :\n");
		printf("1.INSERT AT START\n2.INSERT AFTER NODE\n3.INSERT BY LOCATION\n4.INSERT AT END\n5.DELETE AT START\n6.DELETE AT LOCATION\n7.DELETE THE NODE\n8.DELETE AT END\n9.TRAVERSE SLL\n10.SEARCH SLL\n11.EXIT\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insertstart();
				break;
			case 2:
				insertafter();
				break;
			case 3:
				insertlocation();
				break;
			case 4:
				insertend();
				break;
			case 5:
				deletestart();
				break;
			case 6:
				deletelocation();
				break;
			case 7:
				deletebydata();
				break;
			case 8:
				deleteend();
				break;
			case 9:
				traverse();
				break;
			case 10:
				search();
				break;
			case 11:
				return 0;
			default:
				printf("enter a valid option\n");
		}
				
	}while(1);
	
	return 0;
}

void insertstart()
{
	new=(struct data*) malloc(sizeof(struct data));
	
	if(new==NULL)
	{
		printf("MEMORY FULL\n");
		return;
	}
	
	printf("enter the data :\n");
	printf("enter your roll no :\n");
	scanf("%d",&new->roll);
	printf("enter your age :\n");
	scanf("%d",&new->age);
	printf("enter your name :\n");
	scanf("%s",new->name);
	
	if(st==NULL)
	{
		st=new;
		new->next=NULL;
	}
	else
	{
		new->next=st;
		st=new;
	}
	printf("DATA INSERTED SUCCESSFULLY AT START\n");
	return;
}

void insertafter()
{
	new=(struct data*)malloc(sizeof(struct data));
	
	if(new==NULL)
	{
		printf("MEMORY FULL\n");
		return;
	}
	
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	
	printf("enter the data :\n");
	printf("enter your roll no :\n");
	scanf("%d",&new->roll);
	printf("enter your age :\n");
	scanf("%d",&new->age);
	printf("enter your name :\n");
	scanf("%s",new->name);
	
	int element;
	
	printf("enter roll no in node after which you want to insert data :\n");
	scanf("%d",&element);
	
	temp=st;
	while(temp->roll!=element && temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	if(temp->roll==element)
	{
		new->next=temp->next;
		temp->next=new;
		printf("DATA INSERTED SUCCESSFULLY AFTER NODE WITH ROLL NO %d.\n",element);
	}
	else
	{
		printf("ROLL NUMBER NOT FOUND IN LINKED LIST\n");
	}
	
	return;
}

void insertlocation()
{
	int ct=1,loc;
	temp=st;
	
	new=(struct data*)malloc(sizeof(struct data));
	
	if(new==NULL)
	{
		printf("MEMORY FULL\n");
		return;
	}
	
	printf("enter location at which you want to insert data :\n");
	scanf("%d",&loc);
	
	if(loc==1)
	{
		insertstart();
		return;
	}
		
	while(ct<loc && temp->next!=NULL)
	{
		pr=temp;
		temp=temp->next;
		ct++;
	}
	
	if(ct==loc)
	{
		printf("enter the data :\n");
		printf("enter your roll no :\n");
		scanf("%d",&new->roll);
		printf("enter your age :\n");
		scanf("%d",&new->age);
		printf("enter your name :\n");
		scanf("%s",new->name);
		new->next=pr->next;
		pr->next=new;
		printf("DATA INSERTED SUCCESSFULLY AT LOCATION %d \n",loc);
	}
	else
	{
		printf("LOCATION NOT FOUND IN SLL\n");
	}
}

void insertend()
{
	new=(struct data*) malloc(sizeof(struct data));
	
	if(new==NULL)
	{
		printf("MEMORY FULL\n");
		return;
	}
	
	printf("enter the data :\n");
	printf("enter your roll no :\n");
	scanf("%d",&new->roll);
	printf("enter your age :\n");
	scanf("%d",&new->age);
	printf("enter your name :\n");
	scanf("%s",new->name);
	
	if(st==NULL)
	{
		st=new;
		new->next=NULL;
	}
	else
	{
		temp=st;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
		new->next=NULL;
	}
	
	printf("DATA LINKED SUCCESSFULLY AT END\n");
	return;
}

void deletestart()
{
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	else
	{
		if(st->next==NULL)
		{
			temp=st;
			printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
			free(temp);
			st=NULL;
			printf("DATA FROM 1st NODE DELETED SUCCESSFULLY\n");
		}
		else
		{
			temp=st;
			st=temp->next;
			printf("DATA FROM 1st NODE DELETED SUCCESSFULLY\n");
			printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
			free(temp);
		}
	}
	return;
}

void deletelocation()
{
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	
	int loc,ct=1;
	temp=st;
	
	printf("enter location of node you want to delete :\n");
	scanf("%d",&loc);
	
	if(loc==1)
	{
		deletestart();
		return;
	}
	
	while(ct<loc && temp->next!=NULL)
	{
		pr=temp;
		temp=temp->next;
		ct++;
	}
	
	if(ct==loc)
	{
		pr->next=temp->next;
		printf("DATA FROM %d NODE DELETED SUCCESSFULLY\n",loc);
		printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
		free(temp);
	}
	else
	{
		printf("LOCATION NOT FOUND IN SLL\n");
	}
	
	return;
}

void deletebydata()
{
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	
	int element;
	
	printf("enter roll no of node you want to delete :\n");
	scanf("%d",&element);
	
	temp=st;
	
	if(temp->next==NULL)
	{
		deletestart();
		return;
	}
	
	while(temp->roll!=element && temp->next!=NULL)
	{
		pr=temp;
		temp=temp->next;
	}
	
	if(temp->roll==element)
	{
		pr->next=temp->next;
		printf("DATA OF NODE WITH ROLL NO %d DELETED SUCCESSFULLY\n",element);
		printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
		free(temp);
	}
	else
	{
		printf("ROLL NUMBER NOT FOUND IN LINKED LIST\n");
	}
	
	return;
}

void deleteend()
{
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	else
	{
		if(st->next==NULL)
		{
			temp=st;
			printf("DATA FROM LAST NODE DELETED SUCCESSFULLY\n");
			printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
			free(temp);
			st=NULL;
		}
		else
		{
			temp=st;
			while(temp->next!=NULL)
			{
				pr=temp;
				temp=temp->next;
			}
			pr->next=NULL;
			printf("DATA FROM DELETED NODE IS : %d,%d,%s\n",temp->roll,temp->age,temp->name);
			free(temp);
			printf("DATA FROM LAST NODE DELETED SUCCESSFULLY\n");
		}
	}
	return;
}

void traverse()
{
	int i=1;
	
	struct data *t;
	t=st;
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT\n");
		return;
	}
	else
	{
		do{
			printf("data from %d node is :\n",i);
			printf("roll no : %d\nage :%d\nname : %s\n",t->roll,t->age,t->name);
			t=t->next;
			i++;
		}while(t!=NULL);
	}
	return;
}

void search()
{
	if(st==NULL)
	{
		printf("NO LINKED LIST PRESENT \n");
		return;
	}
	int r_no;
	
	printf("enter the roll no to find the data :\n");
	scanf("%d",&r_no);
	
	temp=st;
	
	while(temp->roll!=r_no && temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	if(temp->roll==r_no)
	{
		printf("data for roll no %d is :\n",r_no);
		printf("roll no : %d\nage :%d\nname : %s\n",temp->roll,temp->age,temp->name);	
	}
	else
	{
		printf("ROLL NO NOT FOUND IN SLL");
	}
}
