#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter any integer value:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d ia an even integer value",a);
	}
	else
	{
		printf("%d is a odd number",a);
	}
	getch();
	return 0;
}
