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
	if(q.rear==MAX-1)
	 return 1;
	else
	 return 0;
 }
int isempty()
{
	if(q.front==-1||q.front==q.rear)
	  return 1;
	else
	  return 0;
}
void insertq(int num)
{
	if(q.front==-1)
	 q.front=0;
	if(isfull())
	  printf("Overflow...");
	else
	{
		q.rear++;
		q.a[q.rear]=num;
		printf("Insrt succ...");
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
	 	q.front++;
	 	printf("\n Deleted value=%d",val);
	 }
}
void display()
{
	int i;
	for(i=q.front;i<=q.rear;i++)
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
