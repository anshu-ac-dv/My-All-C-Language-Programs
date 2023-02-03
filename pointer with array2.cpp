#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int var[5]={10,20,30,40,50};
	int *p[5];
	for(i=0;i<5;i++)
	{
		p[i]=&var[i];
	}
	for(i=0;i<5;i++)
	{
	    printf("%d\n",var[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p[i]);
	}
	getch();
	return 0;
}
