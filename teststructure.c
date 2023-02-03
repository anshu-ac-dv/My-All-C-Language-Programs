#include<stdio.h>
#include<conio.h>
struct person
{
	char name[30];
	int day,month,year;
	float salary;
};
int main()
{
	struct person p1;
	printf("Enter person name:");
	scanf("%c",&p1.name);
	printf("Enter joinning Date:");
	scanf("%d %d %d", &p1.day, &p1.month, &p1.year);
	printf("Enter salary:");
	scanf("%f",&p1.salary);
	printf("%c\n",p1.name);
	printf("%d %d %d\n", p1.day, p1.month, p1.year);
	printf("%f",p1.salary);
	getch();
	return 0;
}
