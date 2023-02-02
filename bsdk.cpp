#include<stdio.h>
#include<conio.h>
int main()
{
	int a=20;
	int *p=&a;
	*p=80;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d",p);
	getch();
	return 0;
}
