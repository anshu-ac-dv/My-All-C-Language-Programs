//WAP to print full pyramid of 123//
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,number=1;
	for(i=5;i<10;i++)
	{
		for(j=5;j<=i;j++)
		{
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
    getch();
	return 0;	
}
