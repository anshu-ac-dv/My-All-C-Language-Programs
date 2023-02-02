#include<stdio.h>
#include<conio.h>
int main()
{
	int matrix[3][3];
	int i,j;
	printf("Enter the values:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&matrix[i][j]);
		}
	}
	printf("You have enterd the values:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matrix[%d][%d]=%d\n",i,j,matrix[i][j]);
		}
	}
	getch();
	return 0;
}
