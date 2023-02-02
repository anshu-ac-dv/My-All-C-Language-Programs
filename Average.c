#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,sum,avg;
	printf("Enter five integer value:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5;
	printf("Sum=%d",sum);
	Printf("Average=%d",avg);
	getch();
	return 0;
}
