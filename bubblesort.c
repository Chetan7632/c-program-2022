#include<stdio.h>
#include<conio.h>
int comp_count=0,swap_count=0;
void bubble_sort(int a[],int n)
{
int i,temp,pass;
for(pass=1;pass<n;pass++)
{
for(i=0;i<n-pass;i++)
{
comp_count++;
if(a[i]>a[i+1])
{
swap_count++;
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
}
int main()
{
int a[20],i,n;
printf("\n Enter How Many Elements:");
scanf("%d",&n);
printf("\n Enter The Unsorted Elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble_sort(a,n);
printf("\n The Sorted List Is :");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n Number of Comparisons=%d",comp_count);

printf("\n Number of Swapping=%d",swap_count);
}




