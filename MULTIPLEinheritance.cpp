#include<iostream>
#include<conio.h>
class A
{
	protected:
		int x;
	public:
		void getx(int a)
		{
			x=a;
		}
};
class B
{
	protected:
		int y;
		void gety(int b)
		{
			y=b;
		}
};
class C : public A,public B
{
	public:
		void sum()
		{
			int total;
			total=x+y;
			cout<<"Sum="<<total;
		}
};
int main()
{
	c obj;
	obj.getx(5);
	obj.gety(10);
	obj.sum();
	return 0; 
}
