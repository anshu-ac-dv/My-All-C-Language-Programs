#include<stdio.h>
#include<conio.h>
int main()
{
	int a;//declaration of a variable//
	int *p;//declaration of o pointer variable//
	p=&a;//initialigation of a pointer variable//
	scanf("%d",&a);
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d",*p);
	getch();
	return 0;
}
