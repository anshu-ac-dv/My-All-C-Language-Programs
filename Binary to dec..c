#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int rem,i=0;
	long long int binary,decimal=0,a;
	printf("ENTER ANY BINARY NUMBER=");
	scanf("%lld",&binary);
	a=binary;
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*pow(2,i);
		binary=binary/10;
		i++;
	}
	printf("Decimal equivalant of %lld is %lld",a,decimal);
	getch();
	return 0;
}
