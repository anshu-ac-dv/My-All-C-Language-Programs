#include<stdio.h>
#include<conio.h>
int main()
{
	int rows=5,i,j;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
	     	{
		if(j<=rows-i)
		{
			printf(" ");
		}
		else
		{
			printf("*");
		}
        	}
        	printf("\n");
	}
	getch ();
	return 0;
	
}
