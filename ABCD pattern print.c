#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i='A';i<='I';i++)
	{
		for(j='A';j<=i;j++)
		{
		printf("%c",j);
	    }
	    printf("\n");
	}
	getch();
	return 0;
}
