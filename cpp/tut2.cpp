#include <iostream>
#include <stdio.h>
using namespace std;

class Apples
{
private:
	int count;

	public:
	Apples()
	{
		count=10;
	}
	Apples(int cnt)
	{
		count = cnt;
	}

	int getCount()
	{
		return count;
	}
	void setCount(int cnt)
	{
		count=cnt;
	}
};

int main()
{
	Apples *p,*q;
	p= new Apples();
	q= new Apples(50);
	cout<<p->getCount()<<endl;
	cout<<q->getCount()<<endl;
	p->setCount(100);
	q->setCount(100);
	cout<<p->getCount()<<endl;
	cout<<q->getCount()<<endl;
}