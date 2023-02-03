//WAP to print half pyramid of 1234//
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,number=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
    getch();
	return 0;	
}
