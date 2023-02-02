#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20],i;
	printf("Enter the 20 name:");
	for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("You have entered name:\n");
	for(i=0;i<20;i++)
	{
		printf("Name=%c\t",a[i]);
	}
	getch();
	return 0;
}
