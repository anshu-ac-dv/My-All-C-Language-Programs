#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter first matrix number:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix number:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
    c[i][j]=a[i][j]+b[i][j];
	printf("Sum=\n%d",c[i][j]);
	getch();
	return 0;
}
