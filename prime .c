#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,a=0;
	printf("ENTER ANY INTEGER VALUE=");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{   
	   
		if(num%i==0)
		{
			a=1;
		}
	
	}
	 if(num==1)
	    printf("not prime");
		
	else if(a==0)
	printf("prime\n");
	else
	printf("not prime");
	getch();
	return 0;
	
}
