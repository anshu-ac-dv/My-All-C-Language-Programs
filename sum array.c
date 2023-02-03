#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[1000];
	int sum=0,i,n;
	printf("NUMBER OF ITEAM PURCHASED=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("ENTER THE PRICE OF ITEM%d=",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	sum=sum+arr[i];
	printf("AMUONT OF BE PAID=%d\n",sum);
	getch();
	return 0;
}

