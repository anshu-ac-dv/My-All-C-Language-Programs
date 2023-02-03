#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=9-2*j;k++)
		{
			printf("%d",k);
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
