#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,count=0;
	printf("Enter any Number:");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		count=count+1;
	}
	printf("Number of digits=%d",count);
	getch();
	return 0;
}
