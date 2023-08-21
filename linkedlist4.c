#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *creatlist(struct node *list)
{
   struct node *newnode,*temp;
   int n,count;
   printf("Enter how many nodes :");
   scanf("%d",&n);
   printf("Enter the node data :");
   for(count=1;count<=n;count++)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->next=NULL;
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
void display(struct node *list)
{
   struct node *temp=list;
   while(temp!=NULL)
   {
     printf("\t %d",temp->data);
     temp=temp->next;
   }
}
struct node *search(struct node *list,int num)
{
   struct node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
    if(temp->data==num)
     return temp;
     return NULL;
}
struct node *insert(struct node *list,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(temp=list;temp->next!=NULL;temp=temp->next);
   if(temp==NULL)
   {
     printf("position out of range___");
      return list;
   }
   newnode->next=temp->next;
   temp->next=newnode;

  return list;
}
void main()
{
   struct node *list=NULL,*temp;
   int choice,pos,n;
   do{
        printf("\n 1.create \n 2.display \n 3.search node in linked list \n 4.insert at end \n 5.exit");
        printf("\n enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1: list=creatlist(list);
                  break;
          case 2: display(list);
                  break;
          case 3: printf("enter element to search:");
                  scanf("%d",&n);
                  temp=search(list,n);
                  if(temp==NULL)
                   printf("\n element not found:");
                  else
                   printf("element found at node address %u",temp);
                  break;
          case 4: printf("enter data :");
                  scanf("%d",&n);
                   list=insert(list,n);
                    display(list);
                   break;
        }
    }while(choice!=5);
 getch();
}

