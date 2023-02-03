#include<stdio.h>
#include<conio.h>
struct classs
{
	int roll_number;
	char name[20];
	float marks;
};
int main()
{
	int x;
	struct classs c1={01,"ANSHU",75.5};
	struct classs c2={02,"ANKIT",70.4};
	struct classs c3;
	c3=c2;
	printf("Roll Number=%d",c1.roll_number);
	printf("\nName=%s",c1.name);
	printf("\nMarks=%f",c1.marks);
	printf("\nRoll Number=%d",c3.roll_number);
	printf("\nName=%s",c3.name);
	printf("\nMarks=%f",c3.marks);
	printf("\nRoll Number=%d",c2.roll_number);
	printf("\nName=%s",c2.name);
	printf("\nMarks=%f",c2.marks);
	x=(c1.roll_number==c2.roll_number)&&(c1.name==c2.name)&&(c1.marks==c2.marks);
	if(x==1)
	printf("Details of c1 & c2 are same");
	else
	print("Not same");
	getch();
	return 0;
}
