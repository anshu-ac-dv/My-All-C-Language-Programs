#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,rem;
  pintf("ENTER A NUMBER");
  scanf("%d",&a);
  rem=a/2;
  if(rem==0)
  {
  	printf("NUMBER IS EUEN",rem);
  	
  }
  else
  {
  	printf("NUMBER IS ODD",rem);
  }
  getch();	
}
