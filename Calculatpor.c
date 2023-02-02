#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("******** Choice ********\n");
	printf("Enter 1 For Addition\n");
	printf("Enter 2 For Subtraction\n");
	printf("Enter 3 For Multiplication\n");
	printf("Enter 4 For Division\n\n");
	printf("***Enter Any One Choice***\n");
	scanf("%d",&a);
	printf("Enter First Number :");
	scanf("%d",&b);
	printf("Enter Second Number :");
	scanf("%d",&c);
	switch (a)
	{
		case 1:
			d=b+c;
			printf("\n%d + %d = %d",b,c,d);
			break;
		case 2:
			d=b-c;
			printf("\n%d - %d = %d",b,c,d);
			break;
		case 3:
			d=b*c;
			printf("\n%d X %d = %d",b,c,d);
			break;
		case 4:
			d=b/c;
			printf("\n%d / %d = %d",b,c,d);
			break;
		default:
			printf("Enter Valid Choice in Main Menu");
	}
	return 0;
}
