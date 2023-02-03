#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,y,n;
	printf("Enter the value of x:");
	scanf("%d",&x);
	if(n=1)
	{
		y=1+x;
		printf("N=1,Y=%d\n",y);
		if(n=2)
		{
			y=1+x/n;
			printf("N=2,Y=%d\n",y);
			if(n=3)
			{
				y=1+x^n;
				printf("N=3,Y=%d\n",y);
				if(n>3,n<1)
				{
					y=1+n^x;
					printf("Y=%d",y);
				}
			}
		}
	}
	getch();
	return 0;
}
