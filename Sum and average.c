#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,Average;
	printf("Enter Three integer value:");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	Average=d/3; 
	printf("sum=%d\n",d);
	printf("Average=%d",Average);
	getch();
	return 0;
}
