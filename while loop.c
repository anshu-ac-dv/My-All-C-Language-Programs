#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,n;
	sum=20;
	n=1;
	
	while(n<=10)
	{
	 sum=sum+n*n;
	 n=n+1;
	}
	printf("sum=%d\n",sum);
	getch();
	
}
