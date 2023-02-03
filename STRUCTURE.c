#include<stdio.h>
#include<conio.h>
struct person
{
	char name[50];
	int day, month, year;
	float salary;
};
int main()
{
   	struct person p1;
	printf("ENTER PERSON NAME=");
	scanf("%c",&p1.name);
	printf("ENTER JONING DATE=");
	scanf("%d%d%d",&p1.day,&p1.month,&p1.year);
	printf("ENTER SALARY=\n");
	scanf("%f",&p1.salary);
	printf("YOU HAVE ENTERED=\n");
	printf("%c\n",p1.name);
	printf("%d%d%d\n",p1.day,p1.month,p1.year);
	printf("%f",p1.salary);
	getch();
	return 0;
}
