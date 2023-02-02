#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,rows;
	printf("Enter Rows:");
	scanf("%d",&rows);
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<9-2*j;k++)
		{
			printf("*");
		}
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}

