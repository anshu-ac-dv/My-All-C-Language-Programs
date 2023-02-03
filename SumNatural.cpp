#include<stdio.h>
#include<conio.h>
int main()
{
	int n, sum=0;
	printf("Enter number of natural number:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of %d Natural Numbers=%d",n,sum);
	getch();
	return 0;
}
