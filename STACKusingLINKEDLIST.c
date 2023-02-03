#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int val;
	struct node*next;
};
struct node*head;
void main()
{
	int choice=0;
	while(choice!=4)
	{
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Display");
		printf("\n4. Quit\n\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
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
				printf("Exiting");
				break;
			default:
				{
					printf("Enter valid choice");
				}
		};
	}
}
void push()
{
	int val;
	struct node*ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("Not able to push the element");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&val);
		if(head=NULL)
		{
			ptr->val=val;
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
		printf("Item Pushed");
	}
}
void pop()
{
	int item;
	struct node*ptr;
	if(head==NULL)
	{
		printf("Underflow");
	}
	else
	{
		item=head->val;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Item popped");
	}
}
void display()
{
	int i;
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Printing Stack Elements\n");
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->val);
			ptr=ptr->next;
		}
	}
}
