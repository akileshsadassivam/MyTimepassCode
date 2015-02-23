#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void drr()
{
	try{
		cout<<"enter 2 numbers"<<endl;
		int i,j;
		cin>>i;
		cin>>j;
		int k=i/j;
		throw 'k';
	}
	catch(char u)
	{
		cout<<"char "<<u<<" caught"<<endl;
		throw 56;
	}
}

int main()
{
	try
	{
		drr();
	}
	
	catch(int u)
	{
		cout<<"int "<<u<<" caught"<<endl;
	}

}