#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],temp,i;
	printf("ENTER ANY POSITIVE VALUES=\n");
	for(i=0;i<-6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("YOU HAVE ENTERET VALUES=\n");
	for(i=0;i<-6;i++)
	{
		printf("%d\n",a[i]);
	}
	temp=a[0];
	for(i=0;i<-6;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i+1];
		}
	}
	printf("\nTHE LARGEST VALUE =%d",temp);
	return 0;
}
