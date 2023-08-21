#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
};
typedef struct node * NODEPTR;
#define NODEALLOC (struct node*)malloc(sizeof(struct node))
NODEPTR create(NODEPTR head)
{
	int i,n;
	NODEPTR temp,newnode;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=NODEALLOC;
		printf("Enter value:");
        scanf("%d",&newnode->data);  
	     if(head==NULL)
		 {
		 	head=temp=newnode;
		 	newnode->next=head;
		 	head->prev=newnode;
		 }
		 else
		 {
		 	temp->next=newnode;
		 	newnode->prev=temp;
		 	temp=newnode;
		 	head->prev=temp;
		 	temp->next=head;
		 }
	}
	return head;
} 
void display(NODEPTR head)
{
	NODEPTR temp=head;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
int main()
{
	NODEPTR head=NULL;
	 head=create(head);
	 display(head);
}
