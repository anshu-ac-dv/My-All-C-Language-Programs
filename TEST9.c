#include<stdio.h>
#include<conio.h>
#include<math.h>
void prime(int a);
void armstrong(int c);
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
void armstrong(int c)
{
	int num1,num2,rem,sum=0,count=0;
	num1=c;
	num2=num1;
		while(num1!=0)
		{
			num1=num1/10;
			count++;
		}
		while(num2!=0)
		{
			rem=num2%10;
			sum=sum+pow(rem,count);
			num2=num2/10;	
		}
		if(sum==c)
		{
			printf("%d is an armstrong number",c);
		}
}

