#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


class Apples
{
public:
	void display() const
	{
		cout<<"const display"<<endl;
	}
	void disp()
	{
		cout<<"saadha display"<<endl;
	}
};


int main()
{
	Apples a;
	const Apples b;
	a.disp();
	b.display();
	a.display();
	//b.disp();
}