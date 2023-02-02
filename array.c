#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num[10];
	printf("ENTER 10 INTEGER NUMBER=\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("you have entered the values=\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
	getch();
	return 0;
}

