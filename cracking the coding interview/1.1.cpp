#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

bool uniq(string s)
{
	bool *b= new bool[256];
	for(string::size_type i=0;i<s.length();i++)
	{
		int k = s[i];
		if(b[k])
		{
			return false;
		}
		b[k]=true;
	}
	return true;
}

int main()
{
	string s;
	cout<<"enter string"<<endl;
	cin>>s;
	if(uniq(s))
	{
		cout<<"all char unique"<<endl;
	}
	else
	{
		cout<<"there are duplicates"<<endl;
	}
}