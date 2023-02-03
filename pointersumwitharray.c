//Sum of an array using pointer//
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int a[4];
	int *p;
	int sum=0;
	p=&a[0];
	printf("Enter the elements of array=\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("Total=%d",sum);
	getch();
	return 0;
}
