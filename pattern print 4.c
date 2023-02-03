#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,m;
	for(i=4;i>0;i--)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
			m=1;
			for(k=0;k<m;k++)
			{
			printf("*");
			m++;
	     	}
	}
	getch();
	return 0;
}
