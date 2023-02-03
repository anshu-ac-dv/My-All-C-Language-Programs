#include<stdio.h>
#include<conio.h>
void prime(int a);
void armstrong(int b);
int main()
{
	int num;
	printf("Enter any integer=");
	scanf("%d",&num);
	prime(num);
	armstrong(num);
	getch();
	return 0;
}
void prime(int a)
{
   	int i,b=0;
   	for(i=2;i<=a/2;i++)
	   {
	   	   if(a%i==0)
	   	   {
	   	   	 b=1;
		   }
	   }
	if(b==1)
	{
		printf("%d is not prime number",a);
	}
	else
	{
		printf("%d is a prime number",a);
	}
}
