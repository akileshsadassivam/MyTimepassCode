#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


class Apples
{
public:
	
	void disp()
	{
		cout<<"Apple display"<<endl;
	}
};

class Oranges
{
public:
	void disp()
	{
		cout<<"Orange display"<<endl;
	}
};

class Juice: public Apples, public Oranges
{
public:
	void see()
	{
		cout<<"seeing what comes"<<endl;
	}
};

int main()
{
	Juice j;
	j.see();
	j.disp(); // AMBIGUITY
}