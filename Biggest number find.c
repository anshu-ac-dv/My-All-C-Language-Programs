#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter first integer  value:");
	scanf("%d",&a);
	printf("Enter second integer value:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is a biggest number",a);
	}
	else
	{
		printf("%d is a biggest number",b);
	}
	getch();
	return 0;
}
