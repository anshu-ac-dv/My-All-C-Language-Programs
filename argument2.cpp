#include<stdio.h>
#include<conio.h>
#include<math.h>
void value(float x,float y,int z);
int main()
{   
    float p,r;
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
	value(p,r,t);
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
	getch();
	return 0;
}
void value(float x,float y,int z)
{
 float amount;
 amount=x*pow(1+y/100,z);
 printf("Amount:%f\n",amount);
 
}
