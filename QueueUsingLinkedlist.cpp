#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();
void main()
{
	int choice;
	while(choice !=4 )
	{
		printf("\n 1. Insert an element\n 2. Delete an element\n 3. Display the queue\n 4. Exit\n");
		printf("\n Enter your choice?");
		scanf("%d"&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Enter Valid Choice??\n");
		}
	}
}
void insert()
{
	
}
void delete()
{
	
}
void display()
{
	
}
void exit()
{
	
}
