#include<stdio.h>
#include<conio.h>
void insert_sort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i-1;j>=0&&a[j]>temp;j--)
{
a[j+1]=a[j];
}
a[j+1]=temp;
}
}
void main()
{
int a[30],i,n;
printf("\n How Many Elements In An Array:");
scanf("%d",&n);
printf("\n Enter The Unsorted Elements:");

for(i=0;i<n;i++)
scanf("%d",&a[i]);
insert_sort(a,n);
printf("\n The Sorted List Is :");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}

