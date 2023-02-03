#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,rev=0,rem;
	printf("Enter any Value:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{	
	 rem=n%10;
	 rev=rev*10+rem;
	 n=n/10;
	}
	if(num==rev)
	{
		printf("Given Number is Palindrome.");
	}
	else
	{
		printf("Given Number is not Palindrome.");
	}
	getch();
	return 0;
}
