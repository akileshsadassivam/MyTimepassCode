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
	Apples(int a, int b, int c)
	{
		(x=a,y=b,z=c);
	}
};


int main()
{

	int **p;
	p = new int * [20];
	for(int i=0;i<20;i++)
	{
		*(p+i)= new int[20];
	}
	for(int i =0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			*(*(p+i)+j)=i*j;
		}
	}
	for(int i =0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			cout<<*(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}
	for (int i = 0; i < 20; ++i)
	{
		delete *(p+i);
	}
	delete p;

}