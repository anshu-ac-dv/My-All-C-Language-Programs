#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,temp;
	printf("Enter First Number:");
	scanf("%d",&num1);
	printf("Enter Second Number:");
	scanf("%d",&num2);
	printf("Before Swapping\n");
	printf("Numbre 1=%d\n",num1);
	printf("Number 2=%d\n",num2);
	printf("After Swapping\n");
	temp=num1;
	num1=num2;
	num2=temp;
	printf("Numbre 1=%d\n",num1);
	printf("Number 2=%d\n",num2);
	getch();
	return 0;
}
