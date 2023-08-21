#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,target;

printf("\n Enter How Many Elements In An Array:");
scanf("%d",&n);
printf("\n Enter Array Elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter Elements To Search:");
scanf("%d",&target);
for(i=0;i<n;i++)
{
	if(a[i]==target)
	{
		printf("\n Element found At Position:%d",i+1);
		break;
	}
}
if(i==n)
printf("\n Element Not Found");
getch();
}

