#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,c,b;
	printf("Enter any Number:");
	scanf("%d",&num);
	if(num==1)
	{
		printf("%d is not a Prime Number.",num);
	}
	else
	{
		for(i=2;i<=num/2;i++)
		{
		c=num%i;
		if(c!=0)
		{
			printf("%d is a Prime Number.",num);
		
		}
		else
		{
			printf("%d is not a Prime Number.",num);
		}
	    }
    }
	getch();
	return 0;
}
