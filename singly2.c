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
NODE *newnode,*temp;
int n,count;
printf("\n Enter How Many Nodes:");
scanf("%d",&n);
for(count=1;count<=n;count++)
{
newnode=(NODE *)malloc(sizeof(NODE));
newnode->next=NULL;
printf("Enter Node Data:");
scanf("%d",&newnode->data);
if(list==NULL)
 {
 list=temp=newnode;
 }
else
 {
 temp->next=newnode;
 temp=newnode;
 }
}return list;
}
NODE *merge(NODE *list1,NODE *list2,NODE *list3)
{
NODE *t1=list1,*t2=list2,*t3=list3,*newnode;
while(t1&&t2)
{
 newnode=(NODE *)malloc(sizeof(NODE));
 newnode->next=NULL;
 if(t1->data<t2->data)
 {
 newnode->data=t1->data;
 t1->t1->next;
 }
 else
 {
 newnode->data=t2->data;
 t2=t2->next;
 }
 if(list3==NULL)
 t3=list3=newnode;
 else
 {
 t3->next=newnode;
 t3=t3->next;
 }
}
 if(t1)
 t3->next=t1;
 if(t2)
 t3->next=t2;
return list3;
}
void *display(NODE *list)
{
NODE *temp=list;
while(temp!=NULL)
{
 printf("\n %d\t",temp->data);
 temp=temp->next;
}
}
void main()
{
NODE *list1=NULL,*list2=NULL,*list3=NULL;
clrscr();
list1=createlist(list1);
printf("\n Created List1 is:");
display(list1);
list2=createlist(list2);
printf("\n Created List2 is:");
display(list2);
list3=merge(list1,list2,list3);
printf("\n Linked List After Merging:");
display(list3);
getch();
}

