//Argument but no return type
#include<stdio.h>
#include<conio.h>
#include<math.h>
void value(float x,float y,int z);
 main()
{
	float p,r;
	int t;
	printf("PRINCIPAL=\n");
	scanf("%f",&p);
	printf("RATE=\n");
	scanf("%f",&r);
	printf("TIME=\n");
	scanf("%d",&t);
	value(p,r,t);
	getch();
	return 0;
}
void value(float x,float y,int z)
{
	float amount;
	amount=x*pow(1+y/100,z);
	printf("AMOUNT=%f",amount);
	
}
