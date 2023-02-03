#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rev=0,rem,num=0;
	printf("Enter any Value:");
	scanf("%d",&n);
	while(n!=0)
	{
	 num=n%10;
	 rev=rev*10+num;
	 n=n/10;
	}
	printf("Reversed Number:%d",rev);
	getch();
	return 0;
}
