#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],i,j,row,column;
	printf("Enter the number of row :");
	scanf("%d",&row);
	printf("Enter the number of collom:");
	scanf("%d",&column);
	printf("Enter elements of an array:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			 printf("%d\t",a[i][j]);
		}
	}
	printf("\nTranspose of matrix:\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		    printf("%d\t",a[j][i]);
		}
	}
	getch();
	return 0;
}
