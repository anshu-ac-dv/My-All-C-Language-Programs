//Display prime number between two itervel lower ,upper...//
#include<stdio.h> 
#include<conio.h>
void value (void);
int main()
{
	int i,x,y,j;
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
	void value (void);
	{
    	int lower,upper,x,y,j;
	    printf("ENTER THE LOWER LIMIT=");
	    scanf("%d",&lower);
	    x=lower;
	    printf("ENTER THE UPPER LIMIT=");
	    scanf("%d",&upper);
        y=upper;
	}
	getch();
	return 0;
}
