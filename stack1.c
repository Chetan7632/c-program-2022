#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
typedef struct stack
{
	char items[MAX];
    int top;
}STACK;
void initstack(STACK *PS)
{
	PS->top=-1;
}
int isFull(STACK *PS)
{
	if(PS->top==MAX-1)
	return 1;
	else
	return 0;
}
int isEmpty(STACK *PS)
{
	if(PS->top==-1)
	return 1;
	else
	return 0;
}
void push(STACK *PS,char ch)
{
	if(isFull(PS))
	printf("\n stack is overflow");
	else
	{
	PS->top++;
	PS->items[PS->top]=ch;
    }
}
char pop(STACK *PS)
{
	char ch;
	ch=PS->items[PS->top];
    PS->top--;
	return ch;
}
int reverse(STACK *PS,char str[])
{
	int i,j=0;

	char str1[MAX];
		
    for(i=0;str[i]!='\0';i++)
	{
		push(PS,str[i]);
	}
	while(!isEmpty(PS))
	{
	 str1[j]=pop(PS);
	 j++;
	}
	return str1;		
} 
void main()
{
	char str[MAX],str1[MAX];
	STACK s1;
	initstack(&s1);
	printf("enter string=");
	scanf("%s",str);
	strcpy(str1,reverse(&s1,str));
              printf("%s",str1);
}

