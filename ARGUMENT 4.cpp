#include<stdio.h>
#include<conio.h>
#include<math.h>
float value(float x,float y,int z);
int main()
{   
    float p,r,a;
    int t;
	int i;
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
 printf("\nPrincipal Amount:");
 scanf("%f",&p);
 printf("Interest Rate:");
 scanf("%f",&r);
 printf("Time:");
 scanf("%d",&t);
 a=value(p,r,t);
 printf("AMOUNT=%f\n",a);
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
	getch();
	return 0;
}
float value(float x,float y,int z)
{
 float amount;
 amount=x*pow(1+y/100,z);
 return amount;
}
