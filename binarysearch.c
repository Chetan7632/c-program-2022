#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,key;
int low,high,mid;

printf("\n Enter How Many Elements In An Array:");
scanf("%d",&n);
printf("\n Enter Array Elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
low=0;
high=n-1;
printf("\n Enter Elements To Search:");
scanf("%d",&key );
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("\n Elements Found At Position:%d",mid+1);
break;

}
if(key<a[mid])
high=mid-1;
if(key>a[mid])
low=mid+1;;
}
if(low>high)
printf("\n Element Not Found:");
getch();
}

