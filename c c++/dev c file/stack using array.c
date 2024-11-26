#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int top=-1,stack[4],max=4;
int main()
{
	int n;
	while(1){
	
	printf("\n -: MAIN MENU :-");
	printf("\n 1 for push");
	printf("\n 2 for pop");
	printf("\n 3 for display");
	printf("\n enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			exit(0);
	}
}
}
void push()
{
	int item;
	if(top==max-1)
	{
		printf("\n \t stack is full");
	}
	else
	{
		printf("\n \t enter item:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
void pop()
{
	int del;
	if(top==-1)
	{
		printf("\n \t stack is empty");
	}
	else
	{
		del=stack[top];
		top--;
		printf("\n \t %d is deleted",del);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
	    printf("\n \t stack is empty");
	}
	else
	{
	for(i=top;i>=0;i--)
	{
		printf("\n");
		printf(" \t [%d]",stack[top]);
		top--;
	}
}
}