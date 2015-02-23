#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

template <class A> void swapp(A &x, A &y)
{
	A t;
	t=x;
	x=y;
	y=t;
}

int main()
{
	int a=4,b=6;
	char c = 'f',d='h';
	swapp(c,d);
	swapp(a,b);
	cout<<c<<" "<<d<<" "<<a<<" "<<b<<endl;
}