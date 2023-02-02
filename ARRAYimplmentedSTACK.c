#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=0;
int menu()
{
	int ch;
	printf("\n 1. PUSH");
	printf("\n 2. POP");
	printf("\n 3. DISPLAY");
	printf("\n 4. Quit");
	printf("Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void push()
{
	int data;
	if(top==MAX)
	{
		printf("Stack Overflow");
		return;
	}
	else
	{
		printf("Enter Data:");
		scanf("%d",&data);
		stack[top]=data;
		top=top+1;
		printf("Data is implemented into the stack");
	}
}
void pop()
{
	if(top==0)
	{
		printf("Stack is Underflow");
		return;
	}
	else
	{
		printf("Poped Element=%d",stack[--top]);
	}
}
void display()
{
	int i;
	if(top==0)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("Elements In Stack");
		for(i=0;i<top;i++)
		{
			printf("\t %d",stack[i]);
		}
	}
}
int main()
{
	int ch;
	do
	{
		ch=menu();
		switch(ch)
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
		case 4:
			exit;
	   }
	   getch();
	}while(1);
}
