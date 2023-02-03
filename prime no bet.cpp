//Display prime number between two itervel lower ,upper...//
#include<stdio.h> 
#include<conio.h>
int main()
{
	int i,x,y,j;
	x=2;
	y=100;
	for(i=x;i<=y;i++)
	{
		int a=0;
	    for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				a=i;
			}
	    }
	    if(a==1)
		{
			printf(" ");
		}
		else
		{
			if(a==0)
			{
			
			printf("%d,",i);
		    }
		}	 	
	}
	getch();
	return 0;
}
