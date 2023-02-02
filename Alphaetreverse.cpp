#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j,k;
	for(i='A';i<='Z';i++)
	{
		for(j='A';j<i-1;j++)
		{
			printf(" ");
		}
		for(k='A';k<=9-2*j;k++)
		{
			printf("%c",k);
		}
		for(j='A';j<i-1;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
