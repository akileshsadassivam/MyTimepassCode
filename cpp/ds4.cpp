#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int sum(int * p, int n)
{
	if(n==1)
	{
		return p[n-1];
	}
	return p[n-1]+sum(p,n-1);
}

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		a[i]=i;
	}

	int s = sum(a, 10);
	cout<<"sum = "<<s<<endl;

}

