#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%c",(char)(j+64));
		}
		printf("\n");
	}
	return 0;
}
