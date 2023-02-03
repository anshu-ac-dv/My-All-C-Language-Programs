#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any number to print natural number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d,",i);
	}
	for(i=1;i<=n;i++)
	{
		 sum+=i;
	}
	printf("Sum=%d",sum);
	getch();
	return 0;
}
