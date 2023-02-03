//Display ARMSTRONG number between two itervel lower ,upper...//
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int lower,upper,i;
	
	printf("ENTER THE LOWER LIMIT=");
	scanf("%d",&lower);
	printf("ENTER THE UPPER LIMIT=");
	scanf("%d",&upper);
	for(i=lower;i<=upper;i++)
	{
	int num1,num2,num3,count=0,sum=0,rem;
	   num1=i;
	   num2=i;
	   
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
		if(i==sum)
		{
			printf("%d,",i);
		}
		
 	}
	getch();
	return 0;
}
