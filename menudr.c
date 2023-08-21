#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *head)
{
	int i,n;
	struct node *newnode,*current;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			current=newnode;
		}
		else
		{
			current->next=newnode;
			current=newnode;
		}
	}
	return head;
}
void display(struct node *head)
{
	struct node *temp=head;
	 while(temp!=NULL)
	 {
	 	printf("%d\t",temp->data);
	 	temp=temp->next;
	 }
}
struct node* insert(struct node *head,int num,int pos)
{
	int i;
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		return head; 
	}
	else
	{
		for(i=1,temp=head;i<pos-1&&temp->next!=NULL;temp=temp->next,i++);
		newnode->next=temp->next;
		temp->next=newnode;
		return head;
	}
}
struct node* deletemid(struct node *head,int pos)
{
	int i;
	struct node *temp,*p;
   if(pos==1)
   {
   	p=head;
   	head=head->next;
   	free(p);
     return head;	
   } 
   else
   {
   	for(i=1,temp=head;i<(pos-1)&&temp->next->next!=NULL;i++,temp=temp->next);
   	p=temp->next;
   	temp->next=p->next;
   	free(p);
   	 return head;
   }
}
int main()
{
	int num,ch,pos;
	 struct node *head=NULL;
	do
	{
		printf("\n 1-create \n 2-disp \n 3-insert \n 4-delete \n 5-exit");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=create(head);
			       break;
			case 2:display(head);
			       break;
		    case 3:printf("Enter number to insert:");
		           scanf("%d",&num);
		           printf("Enter pos:");
		           scanf("%d",&pos);
				   head=insert(head,num,pos);
				   break;
			case 4:printf("Enter position:");
			       scanf("%d",&pos);
				   head=deletemid(head,pos);
				   break;
			case 5:exit(0);
		}
	}while(ch!=5);
}


