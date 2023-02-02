//Display prime number between two itervel lower ,upper...//
#include<stdio.h> 
#include<conio.h>
#include<math.h>
int main()
{
	int lower,upper,i,rem,sum=0,num1,num2;
	printf("ENTER THE LOWER LIMIT=");
	scanf("%d",&lower);
	printf("ENTER THE UPPER LIMIT=");
	scanf("%d",&upper);
	for(i=lower;i<=upper;i++)
	{
	   num1=i;
	   num2=i;
	   while(num1!=0)
	{
		num=num1/10;
		count++;
	}
	while(num2!=0)
	{
		rem=num2%10;
		sum=sum+pow(rem,count);
		num1=num1/10;	
	}
	getch();
	return 0;
}
