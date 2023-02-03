#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],temp=0,i;
	printf("ENTER ANY VALUES=\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("YOU HAVE ENTERET VALUES=\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
	}
	printf("\nTHE LARGEST VALUE =%d",temp);
	return 0;
}
