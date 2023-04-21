#include<stdio.h>
int queue[100],rear=-1,front=-1,size;
void enque(int val)
{
    if(front==0 && rear==size-1)
	{
		printf("Queue is full\n");
	}	
	else if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[front]=val;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=val;
	}
}
int deque()
{
	int val;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
		return -1;
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
		return val;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	while(i!=rear)
	{
		printf("%d",queue[i]);
		i=(i+1)%size;
	}
	printf("%d\n",queue[i]);
}
int main()
{
	int i,ch,val;
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque 2. deque 3.display 4.front view 5.rear view 6.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
		   //enque operation 
		   scanf("%d",&val);
		   enque(val);	
		}
		else if(ch==2)
		{
		   //deque operation
		   val=deque();
		   if(val==-1)
		   {
		   	printf("Queue is empty\n");
		   }
		   else 
		   {
		   	printf("%d  %d\n",i,val);
		   }	
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			printf("%d\n",front);
		}
		else if(ch==5)
		{
			printf("%d\n",rear);
		}
		else
		{
			break;
		}
	}
}
