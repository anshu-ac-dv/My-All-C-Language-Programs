// NO ARGUMENT WITH RETURN VALUE//
#include<stdio.h>
#include<conio.h>
#include<math.h>
float value(void);
int main()
{   
    int i;
    float a;
   for (i=0;i<30;i++)
 {
 	printf("*");
 }
    a=value();
    printf("AMOUNT=%f\n",a);
	for(i=0;i<30;i++)
 {
 	printf("*");
 }
	getch();
	return 0;
}
float value(void)
{
	float p,r;
    int t;
	printf("\nPrincipal Amount:");
    scanf("%f",&p);
    printf("Interest Rate:");
    scanf("%f",&r);
    printf("Time:");
    scanf("%d",&t);
    float amount;
    amount=p*pow(1+r/100,t);
    return amount;
 
}
