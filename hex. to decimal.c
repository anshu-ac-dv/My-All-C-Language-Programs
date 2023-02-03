#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int binary,rem,decimal=0,i=0,a;
	printf("ENTER ANY BINARY NUMBER=");
	scanf("%d",&binary);
	a=binary;
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*pow(16,i);
		binary=binary/10;
		i++;
	}
	printf("Decimal equivalant of %d is %d",a,decimal);
	getch();
	return 0;
}
