#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	 int a,b,c,d,x1,x2;
	 
	 printf("ENTER THE CO-EFFICIANT OF X2\n");
	 scanf("%d",&a);
	 
	 printf("ENTER THE COI-EFFICINT OF X\n");
	 scanf("%d",&b);
	 
	 printf("ENTER THE CONSTANT VALUE\n");
	 scanf("%d",&c);
	 
	 d=b*b-4*a*c;
	 
	 x1=(-b+sqrt(d))/2*a;
	 x2=(-b-sqrt(d))/2*a;
	
	 printf("ROOT1=%d\n",x1);
	 printf("ROOT2=%d\n",x2);
	 
	 getch();
	 
	 
	 
}
