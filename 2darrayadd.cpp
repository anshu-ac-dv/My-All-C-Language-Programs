#include<stdio.h>
#include<conio.h>
int main()
{
	int A[3][3], B[3][3], C[3][3];
	int i,j;
	printf("Enter the values of Matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the values of Matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("sum of matrix A and matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Sum of %d and %d=%d\n",A[i][j],B[i][j],C[i][j]);
		}
	}
	getch();
	return 0;
}
	
