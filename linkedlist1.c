#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *creatlist(struct node*list)
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
struct node *delpos(struct node *list,int pos)
{
  struct node *temp=list,*temp1;
  int i;
  if(pos==1)
  {
    list=temp->next;
    free(temp);
  }
  else
  {
   for(i=1,temp=list;i<pos-1 && temp!=NULL;i++)
    temp=temp->next;
    if(temp==NULL)
    {
      printf("position is out of range");
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
  struct node *list=NULL,*temp;
  int choice,pos,n;
  do{
    
      printf("\n 1.create \n 2.display \n 3.insert at end \n 4.delete by position \n 5.exit");
    
      printf("\n Enter your choice :");
      scanf("%d",&choice);
      switch(choice)
    {
      case 1: list=creatlist(list);
      break;
      case 2: display(list);
      break;
      case 3: printf("Enter data :");
              scanf("%d",&n);
              list=insert(list,n);
              display(list);
              break;
     case 4: printf("Enter the position to be delete :");
             scanf("%d",&pos);
             list=delpos(list,pos);
             display(list);
             break;
    }
 }while(choice!=5);
 getch();
}
