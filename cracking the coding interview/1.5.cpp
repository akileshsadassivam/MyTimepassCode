#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

void replacestring(string s)
{
	char t=0;
	int space=0;
	char *st;
	for(string::size_type i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			space++;		
		}
	}
	int newsize= s.length() + 2*space;
	cout<<newsize<<"\t"<<s.length()<<"\t"<<space<<endl;
	st = new char[newsize];
	for(string::size_type i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			st[t]='%';t++;
			st[t]='2';t++;
			st[t]='0';t++;continue;
		}
		st[t]=s[i];t++;
	}
	cout<<"altered string is ";
	for(int i=0;i<newsize-1;i++)
	{
		cout<<st[i];
	}
	cout<<endl;
}

int main()
{
	string s;
	cout<<"enter string with spaces to be removed"<<endl;
	getline(cin,s);
	replacestring(s);
}