#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	int roll_number;
	char branch[10];
	int semester[10];
};
int main()
{
    int i;
	struct student s[10];
	for(i=0;i<=10;i++)
	{
		printf("ENTER THE NAME OF NAME=%d",i);
		scanf("%s",&s[i].name);
		printf("ENTER ROLL NUMBER OF STUDENTS=%d\n",i);
		scanf("%s",&s[i].roll_number);
		printf("ENTER THE BRANCH NAME OF STUDENTS=%c\n",i);
		scanf("%c",&s[i].branch);
		printf("ENTER THE SEMESTER OF STUDENTS=%d\n",i);
		scanf("%d",&s[i].semester);
	}
	printf("Details of Stduents=\n");
	for(i=1;i<=10;i++)
	{
		printf("Name of Students=%d:%s\n",i,s[i].name);
		printf("Roll Number of student=%d:%s\n",i,s[i].roll_number);
		printf("Branch name of student=%d:%d\n",i,s[i].branch);
		printf("Semester of students=%d:%d\n",i,s[i].semester);
	}
	getch();
	return 0;	
}
