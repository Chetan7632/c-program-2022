#include <stdio.h>
 
int findmax(int b[10], int k);
void exchang(int b[10], int k);
int main()
{
    int a[10];
    int i, j, n, temp;
 
    printf("\n Enter how many elements ");
    scanf("%d", &n);
    printf("\n Enter unsorted elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    exchang(a,n);
    printf("\n the Sorted array list is...");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int findmax(int b[10], int k)
{
    int max = 0, j;
    for (j = 1; j <= k; j++)
    {
        if (b[j] > b[max])
        {
            max = j;
        }
    }
    return(max);
}
void exchang(int b[10], int k)
{
    int  temp, big, j;
    for (j = k - 1; j >= 1; j--)
    {
        big = findmax(b, j);
        temp = b[big];
        b[big] = b[j];
        b[j] = temp;
    }
    return;
}

