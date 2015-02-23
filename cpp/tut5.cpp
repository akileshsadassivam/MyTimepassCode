#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


class Apples
{
public:
	int x,y,z;
	Apples()
	{
		x=0;y=0;z=0;
	}
	Apples(int a, int b=0, int c=0)
	{
		(x=a,y=b,z=c);
	}

	void operator~()
	{
		x=-x;y=-y;z=-z;
	}
	void display()
	{
		cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<endl;
	}
};


int main()
{

	Apples a(10,20,30);
	a.display();
	~a;
	a.display();
	Apples b;
	b=7;
	b.display();
	~b;
	b.display();


}