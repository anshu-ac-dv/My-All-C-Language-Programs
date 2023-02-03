#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=0;
int menu()
{
	int ch;
	printf("**** Stack Operation Using Array****\n\n");
	printf("\t1. Push\n");
	printf("\t2. Pop\n");
	printf("\t3. Display\n");
	printf("\t4. Quit\n\n");
	printf("******Enter Your Choice******\n\n");
	scanf("%d",&ch);
	return ch;
}
void push()
{
	int data;
	if(top==MAX)
	{
		printf("\n\n ****Stack Overflow****\n");
		return;
	}
	else
	{
		printf("Enter Data:");
		scanf("%d",&data);
		stack[top]=data;
		top=top+1;
		printf("****Data is Pushed into the stack*****\n");
	}
}
void pop()
{
	if(top==0)
	{
		printf("\n ****Stack Underflow****");
		return;
	}
	else
	{
		printf("\n Poped Element =%d",stack[--top]);
	}
}
void display()
{
	if(top==0)
	{
		printf("\n Stack is Empty");
		return;
	}
	else
	{
		int i;
		printf("Elements in Stack ");
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
				exit(0);
				
		}
		getch();
	}while(1);
}
