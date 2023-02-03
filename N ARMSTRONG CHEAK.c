#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num1,num2,rem,num,count,sum=0;
	printf("ENTER ANY INTEGER VALUE=");
	scanf("%d",&num);
	num1=num;
	num2=num1;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	while(num!=0)
	{
		rem=num1%10;
		sum=sum+pow(rem,count);
		num1=num1/10;
	}
	if(num2==sum)
	printf("%d is an armstrong number",num2);
	else
	printf("%d is not an armstront number",num2);
	getch();
	return 0;
}
