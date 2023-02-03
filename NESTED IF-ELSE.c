#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   printf("ENTER THREE INTEGER NUMBER=\n");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a>b)
   {
   	if(a>c)
   	printf("GRATEST NUMBER=%d",a);
   	else
   	printf("GRATEST NUMBER=%d",c);
   }
   else
   {
   	if(b>c)
   	printf("GRATEST NUMBER=%d",b);
   	else
   	printf("GRATEST NUMBER=%d",c);
	   }
	getch();
		
}
