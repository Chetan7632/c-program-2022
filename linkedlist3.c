#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *create(NODE *list)
{
	NODE *temp,*newnode;
	int n,count;
	printf("Enter how many node:");
	scanf("%d",&n);
	for(count=1;count<=n;count++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\n Enter the node data:");
		scanf("%d",&newnode->data);
		if(list==NULL)
		 list=temp=newnode;
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
int count(NODE *list)
{
	int c=0;
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		c++;
	}
	return c;
}
int main()
{
	NODE *list=NULL;
	list=create(list);
	printf("Total number of node=%d",count(list));
}
