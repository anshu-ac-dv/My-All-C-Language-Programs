#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int a[4];
	int sum=0;
	printf("Enter the elements of array=\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		sum=sum+a[i];
	}
	printf("Total=%d",sum);
	getch();
	return 0;
}
