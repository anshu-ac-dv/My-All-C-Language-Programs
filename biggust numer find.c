#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter first any integer valude:");
	scanf("%d",&a);
	printf("Enter second any integer valude:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("%d is a biggust number",b);
	}
	else
	{
		printf("%d is a smallest number",a);
	}
	getch();
	return ;
}
