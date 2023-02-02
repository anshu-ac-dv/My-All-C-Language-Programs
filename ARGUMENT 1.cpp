#include<stdio.h>
#include<conio.h>
#include<math.h>
void value(void);
int main()
{
	int i;
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
	value();
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
	getch();
	return 0;
}
void value(void)
{
 float p,r,amount;
 int t;
 
 printf("\nPrincipal Amount:\t");
 scanf("%f",&p);
 printf("Interest Rate:\t");
 scanf("%f",&r);
 printf("Time:\t");
 scanf("%d",&t);
 amount=p*pow(1+r/100,t);
 printf("Amount:%f\n",amount);
 
}
