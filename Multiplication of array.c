#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,r1,r2,c1,c2,k,sum;
	printf("Enter the number of rows  and collum for first matrix :");
	scanf("%d%d",&r1,&c1);
	printf("Enter the number of rows  and collum for second matrix :");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter row and collum for first matrix:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter row and collum for second  matrix:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			sum=0;
			for(k=0;k<c1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			mul[i][j]==sum;
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\t%d",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Enter proper no. of row and colom ");
	}
	getch();
	return 0;
}
