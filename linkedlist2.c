#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *createlist(struct node *list)
{
   struct node *newnode,*temp;
   int n,count,s=0,d;
   printf("Enter how many node :");
   scanf("%d",&n);
   while(n!=NULL)
   {
     d=n%10;
     s=(s*10)+d;
     n=n/10;
   }
   while(s!=NULL)
   {
     d=s%10;
     s=s/10;
     newnode=(struct node *)malloc(sizeof(struct node));
     newnode->next=NULL;
     newnode->data=d;
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
void display(struct node *list)
{
  struct node *temp=list;
  while(temp!=NULL)
  {
    printf("\t %d",temp->data);
    temp=temp->next;
  }
}
void main()
{
   struct node *list=NULL;
   list=createlist(list);
   printf("\n node data is :");
   display(list);
}

