#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
	map<int,int> m;
	m[1]=4;m[2]=1;
	for(int i=0;i<4;i++)
	{
		cout<<m[i]<<endl;
	}
	if(m.find()4!=m.end())
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
}