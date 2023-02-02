#include<stdio.h>
#include<conio.h>
int main()
{
	int x=100,y,z;
	int *p1,**p2;
	p1=&x;
	p2=&p1;
	*p1=120;
	y=x;
	**p2=140;
	z=*p1+**p2;
	printf("The value of x=%d\n",x);
	printf("The value of y=%d\n",y);
	printf("The value of z=%d\n",z);
	getch();
	return 0;
}
