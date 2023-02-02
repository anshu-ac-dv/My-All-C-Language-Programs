#include<stdio.h>
#include<conio.h>
int main()
{
    char i;
	char name[5];
	int marks;	  
	int *p;
		printf("Enter first student name=");
    	scanf("%c",&name);
    	printf("Enter second student name");
    	scanf("%c",&name);
    	printf("Enter third student name");
    	scanf("%c",&name);
    	printf("Enter fourth student name");
    	scanf("%c",&name);
    	printf("Enter fifth student name");
    	scanf("%c",&name);
	for(i=0;i<5;i++)
	{
		printf("%d",i);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",marks);
	}
	getch();
	return 0;
}
