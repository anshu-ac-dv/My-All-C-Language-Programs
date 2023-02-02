//WAP to print half pyramid of 1234//
#include<stdio.h>
#include<conio.h>
int main()
{
    char i,j,number=65;
	for(i=65;i<=90;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",number);
			number++;
		}
		printf("\n");
	}
    getch();
	return 0;	
}
