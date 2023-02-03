#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0||i==4||j==0||j==4)
			{
				printf("S");
			}
			else if(i==2&&j==1)
			{
				printf("RAM");
			}
			else if(i==1||i==3)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
