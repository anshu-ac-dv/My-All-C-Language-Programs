//Display prime number between two itervel lower ,upper...//
#include<stdio.h> 
#include<conio.h>
int main()
{
	int lower,upper,i,x,y,j;
	printf("ENTER THE LOWER LIMIT=");
	scanf("%d",&lower);
	printf("ENTER THE UPPER LIMIT=");
	scanf("%d",&upper);
	x=lower;
	y=upper;
	for(i=x;i<=y;i++)
	{
		int a=0;
	    for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				a=1;
			}
	    }
	    if(a==0)
		{
			printf("%d,",i);
		}	 	
	}
	getch();
	return 0;
}
