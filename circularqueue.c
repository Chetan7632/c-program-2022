#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int a[MAX];
	int front,rear;
}q;
void init()
{
	q.front=q.rear=-1;
}
int isfull()
{
	if((q.front==0&&q.rear==MAX-1)||(q.front==q.rear+1))
	 return 1;
	else
	 return 0;
 }
int isempty()
{
	if(q.front==-1)
	  return 1;
	else
	  return 0;
}
void insertq(int num)
{
	if(isfull())
	  printf("Overflow...");
	else
	{
		if(q.front==-1)
		  q.front=0;
		q.rear=(q.rear+1)%MAX;
		q.a[q.rear]=num;
		  printf("Insert Succ....");
	}
}
void deleteq()
{
	int val;
	 if(isempty())
	  printf("Underflow...");
	 else
	 {
	 	val=q.a[q.front];
	 	if(q.front==q.rear)
	 	  q.front=q.rear=-1;
	 	q.front=(q.front+1)%MAX;
	 	printf("\n Deleted value=%d",val);
	 }
}
void display()
{
	int i;
	 i=q.front;
	do
	{
		printf("%d\t",q.a[i]);
		i=(i+1)%MAX;
	}while(i!=q.rear);
	 	printf("%d\t",q.a[i]);
}
void main()
{
	int ch,num;
	init();
	do
	{
		printf("\n 1-insert \n 2-delete \n 3-display \n 4-exit:");
	    printf("Enter choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:printf("Enter number:");
	    	       scanf("%d",&num);
	    	       insertq(num);
	    	       break;
	    	case 2:deleteq();
	    	       break;
	        case 3:display();
	               break;
		}
	}while(ch!=4);
}
