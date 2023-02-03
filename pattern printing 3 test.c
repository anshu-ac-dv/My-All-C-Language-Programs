#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=4;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			for(k=3;k>j;k--)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}
