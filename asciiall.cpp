#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Uppercase Alfhabets\n");
	for(ch='A';ch<='Z';ch++)
	{
		printf("ASCII value of %c is %d\n",ch,ch);
	}
	printf("Lowercase Alfhabets\n");
	for(ch='a';ch<='z';ch++)
	{
		printf("ASCII value of %c is %d\n",ch,ch);
	}
	printf("0-9\n");
	for(ch='0';ch<='9';ch++)
	{
		printf("ASCII value of %c is %d\n",ch,ch);
	}
	getch();
	return 0;
}
