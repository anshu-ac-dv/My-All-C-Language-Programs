#include<stdio.h>
#include<conio.h>
int main()
{
	int x,*p,y;
	x=10;
	p=&x;
	y=*p;
	*p=20;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",*p);
	getch();
	return 0;
}
