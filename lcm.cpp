#include<stdio.h>
#include<conio.h>
int main()
{
	int lcm,a,b,gcd,i;
	printf("Enter two integer values:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	lcm=(a*b)/gcd;
	printf("GCD of %d and %d is:%d\n",a,b,gcd);
	printf("LCM of %d and %d is:%d",a,b,lcm);
	getch();
	return 0;
}
