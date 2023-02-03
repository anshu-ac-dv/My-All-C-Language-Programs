#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
	    int k;
		for(j=1;j<=3-i;j++)
	    	{
			printf(" ");
	     	}
		       for(k=1;k<=2*i-1;k++)
		        {
		    	   printf("%d",k);
		     	}
		     	for(j=1;j<=3-i;j++)
	         	{
		        	printf(" ");
	     	    }
		printf("\n");
	}
	getch();
	return 0;
}
