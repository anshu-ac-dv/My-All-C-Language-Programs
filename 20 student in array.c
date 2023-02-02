#include<stdio.h>
#include<conio.h>
int main()
{
	char student[20],i;
	printf("Enter 20 student name:");
	for(i=0;i<20;i++)
	{
		scanf("%s",&student[i]);
	}

	printf("student=%s\n",student[i]);
 
	getch();
	return 0;
}
