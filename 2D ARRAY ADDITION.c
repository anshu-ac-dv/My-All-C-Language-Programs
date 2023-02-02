#include<stdio.h>
#include<conio.h>
int main()
{

    int A[3][3], B[3][3], C[3][3],i,j,k;
	printf("Enter the values of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the values of second matrix:\n");
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
		 C[i][j]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
		C[i][j]=C[i][j]+A[i][j]*B[i][j];
		}
	    
    }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\n",C[i][j]);
		}
	}
	getch();
	return 0;
}
