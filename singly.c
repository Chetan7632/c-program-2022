#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct NODE
{
	int data;
	struct NODE *next;
};
struct NODE*create(struct NODE*list)
{
	int n,count;
	struct NODE *newnode,*temp;
	printf("Enter how many node :");
	scanf("%d",&n);
	for(count=0;count<n;count++)
	{
		newnode=(struct NODE*)malloc(sizeof(struct NODE));
		printf("Enter the node data :");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			list=temp=newnode;
		}
	   else
	    {
	    	temp->next=newnode;
	    	temp=newnode;
		}
	}
	return list;
}
void display(struct NODE* list)
{
	struct NODE *temp;
	temp=list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void main()
{
	struct NODE *list=NULL;
	list=create(list);
	printf("\n display linked list :");
	display(list);
}
  

