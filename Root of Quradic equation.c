#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,x1,x2,d,Root1,Root2;
	printf("Enter the Co-Efficent of x2,x and consttent number:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-(4*a*c);
	if(d>0)
	{
		x1=(-b+ sqrt(d))/2*a;
		x2=(-b- sqrt(d))/2*a;
		printf("Root1=%d",x1);
		printf("Root2=%d",x2);
	}
	else if(d==0)
	{
		Root1=Root2=-b/(2*a);
		printf("Root1=Root2=%d",Root1);
	}
    getch();
    return ;
}
