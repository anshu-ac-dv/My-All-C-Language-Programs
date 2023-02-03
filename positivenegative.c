#include<stdio.h>
#include<conio.h>
int main()
{
	float a;
	printf("Enter any value:");
	scanf("%f",&a);
	if(a>0)
	printf("%f is a positive number",a);
	else if(a<0)
	printf("%f is a negative number",a);
	else
	printf("0 is non-negative & non-positive value");
	getch();
	return 0;
}
