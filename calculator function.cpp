#include<stdio.h>
#include<conio.h>
void add(int x,int y);
void sub(int x,int y);
void mul(int x,int y);
void dev(int x,int y);
main()
{
	int a,b;
	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	dev(a,b);
}
void add(int x,int y)
{
	int z=x+y;
	printf("sum=%d\n",z);
}
void sub(int x,int y)
{
	int z=x-y;
	printf("substraction=%d\n",z);
}
void mul(int x,int y)
{
	int z=x*y;
	printf("multiplication=%d\n",z);
}
void dev(int x,int y)
{
	int z=x/y;
	printf("devision=%d\n",z);
}
