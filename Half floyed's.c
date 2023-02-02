//WAP to print half pyramid of 1234//
#include<stdio.h>
#include<conio.h>
int main()
{
    char i,j,number=97;
	for(i=97;i<=102;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c ",number);
			number++;
		}
		printf("\n");
	}
    getch();
	return 0;	
}
