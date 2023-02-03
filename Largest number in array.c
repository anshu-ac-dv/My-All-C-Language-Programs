#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("Enter any integer value:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Largest element=%d",a[0]);
	getch();
	return 0;
}
