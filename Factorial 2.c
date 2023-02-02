//Recusion (pagal function)// To find factorial
#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{   int n,a,result;
	printf("ENTER Any positive  NUMBER =");
	scanf("%d",&n);
	result=fact (n);
	printf("FACTORIAL OF %d is %d",n,result);
    getch();
	return 0;
}
fact(n)
	{
	    int a;
		if (n==1||n==0)
		{
			return (1);
		}
		else
		{
			a=n*fact(n);
			return a;
		}
	}
