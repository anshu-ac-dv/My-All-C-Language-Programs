#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,x,y;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of X:");
	scanf("%d",&x);
	if(n=1)
	{
		y=1+x;
		printf("Y=%d",y);
		return 0;
	
		if(n=2)
		{
			y=x/n;
			printf("Y=%d",y);
			return 0;
	
			if(n=3)
			{
				y=1+pow(n,x);
				printf("Y=%d",y);
				return 0;
			
				if(n>3||n<1)
				{
					y=pow(x,n);
					printf("Y=%d",y);
					return 0;
				}
	}
	return 0;
}

