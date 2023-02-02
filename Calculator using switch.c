#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enetr first integer value:");
	scanf("%d",&a);
	printf("Enter second integer value:");
	scanf("%d",&b);
	(a<b)?(printf("%d is a biggust number",a)):(printf("%d is a smallest number",b));
	getch();
	return ;
}
