#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter any integer value :");
	scanf("%d",&a);
	(a%2==0)?(printf("%d is a even number",a)):(printf("%d is a odd number",a));
	getch();
	return 0;
}
