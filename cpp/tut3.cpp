#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Apples
{
private:
	int count;

public:
	int g;
	Apples();
	Apples(int);
	int getCount();
	void setCount(int);
	~Apples();
	void putfn();
};
	int Apples::g = 55;
	Apples::Apples()
	{
		count=10;
	}
	Apples::Apples(int cnt)
	{
		count = cnt;
	}

	int Apples::getCount()
	{
		return count;
	}
	void Apples::setCount(int cnt)
	{
		count=cnt;
	}

	Apples::~Apples(){}
	void Apples::putfn()
	{
		cout<<"drrr macha drrr"<<endl;
	}


int m=1000;
enum color{blue, black, orange, green};

int main()
{
	char c[4]="xyz";

	void * ptr;

	ptr=c;

	int *i = new int[4];
	for(int k=0;k<4;k++)
	{
		*(i+k)=k;
		cout<<"i["<<k<<"]="<<*(i+k)<<endl;
	}

	delete []i;


	Apples *p,*q;
	p= new Apples();
	q= new Apples(50);
	cout<<p->getCount()<<endl;
	cout<<q->getCount()<<endl;
	p->setCount(100);
	q->setCount(100);
	cout<<p->getCount()<<endl;
	cout<<q->getCount()<<endl;

	color myColor = (color) 2;
	cout<<myColor<<endl;

	cout<<p->g<<"\t"<<q->g<<endl;

	cout<<c<<endl;
	{
		int m=20;
		cout<<"  m="<<setw(6)<<m<<endl;
		cout<<"::m="<<setw(6)<<::m<<endl;
	}

	

}