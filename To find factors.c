// To display factors of a number//
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num;
	printf("ENTER ANY INTEGER VALUE TO FIND FACTORS=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf(" %d ,",i);
		}
	}
	getch();
	return 0;
}
