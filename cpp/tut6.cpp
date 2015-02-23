#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


class Apples
{
public:
	virtual void display()
	{
		cout<<"Apple's method"<<endl;
	}
};

class Oranges:public Apples
{
	void display()
	{
		cout<<"Orange's method"<<endl;
	}
};


int main()
{
	Apples *p,*q;
	p= new Apples();
	q= new Oranges();
	p->display();
	q->display();

}