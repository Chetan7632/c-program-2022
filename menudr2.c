#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *createlist(NODE *list)
{
	int n,count;
	NODE *newnode,*temp;
	printf("\n Enter how many node");
	scanf("%d",&n);
	for(count=1;count<n;count++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\n Enter the node data");
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			list=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
void display(NODE *list)
{
	NODE *temp=list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
NODE *search(NODE *list,int num)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
		   return temp;
	}
	return NULL;
}
NODE *insert(NODE *list,int pos,int num)
{
	int i;
	NODE *newnode,*temp;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->next=NULL;
	if(pos==1)
	{
		newnode->next=list;
		list=newnode;
	}
	else
	{
		for(temp=list,i=1;i<(pos-1)&&temp!=NULL;i++)
		    temp=temp->next;
		if(temp==NULL)
		{
			printf("position out of range");
			return list;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return list;
}
NODE *delval(NODE *list,int num)
{
	NODE *temp=list,*temp1;
	if(list->data==num)
	{
		list=temp->next;
		free(temp);
	}
	for(temp=list;temp->next!=NULL;temp=temp->next)
	 if(temp->next->data==num)
	{
		temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
		return list;
	}
	printf("Element not found");
	return list;
}
NODE *delpos(NODE *list,int pos)
{
	NODE *temp=list,*temp1;
	int i;
	if(pos==1)
	{
		list=temp->next;
		free(temp);
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++)
		  temp=temp->next;
		if(temp==NULL)
		{
			printf("position out of range");
			return list;
		}
	    temp1=temp->next;
	    temp->next=temp1->next;
	    free(temp1);
	}
	return list;
}
void main()
{
	NODE *list=NULL,*temp;
	int ch,n,pos;
	do
	{
		printf("\n 1-ceate \n 2-display \n 3-search \n 4-insert \n 5-delete by value \n 6-delete by pos \n 7-sexit");
	    printf("\n Enter choice");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:list=createlist(list);
	    	       break;
	        case 2:display(list);
	               break;
	        case 3:printf("Enter Element to search");
	               scanf("%d",&n);
	               temp=search(list,n);
	               if(temp==NULL)
	                printf("Element found at node address %d",temp);
	               break;
	        case 4:printf("Enter the data & position");
	               scanf("%d %d",&n,&pos);
	               list=insert(list,pos,n);
	               dislpay(list);
	               break;
	        case 5:printf("Enter the value to be deleted");
	               scanf("%d",&n);
	               list=delval(list,n);
	               dislpay(list);
	               break;
	        case 6:printf("Enter position for delete");
	               scanf("%d",&pos);
	               list=delpos(list,pos);
	               dislpay(list);
	               break;
		}
	}while(ch!=7);
    getch();
}
