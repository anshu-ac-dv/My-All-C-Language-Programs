#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,x1,x2,d;
	printf("Enter the co-efficent of x2:");
	scanf("%d",&a);
	
	printf("Enter the co-efficent of x:");
	scanf("%d",&b);
	                                            
	printf("Enter the constant value:");
	scanf("%d",&c);
	
	d=b*b-(4*a*c);
	
	x1=(-b+sqrt(d))/2*a;
	x2=(-b-sqrt(d))/2*a;
	
	printf("Root1=%d",x1);
	printf("Root2=%d",x2);
	getch();
	return 0;
}
