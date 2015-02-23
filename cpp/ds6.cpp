#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class stack
{
private:
	
public:
	stack()
	{
		
	}
	void display()
	{
		
	}
	void initstack()
	{
		
	}
	void push(int k)
	{
		
	}
	void pop()
	{
		
	}
};

int main()
{
	stack s;
	s.initstack();
	cout<<"\t1 : push\t2 : pop\t 3: exit";
	int c;
	do{
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"enter element to be pushed"<<endl;
		int k;
		cin>>k;
		s.push(k);
		break;
		case 2:
		s.pop();
		break;
		case 3:
		break;
		default:
		cout<<"invalid i/p"<<endl;
	}
}while(c!=3);
}

