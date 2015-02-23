#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

void rev(string s)
{
	char t;
	int k=s.length()-1;
	for(string::size_type i=0;i<k/2;i++)
	{
		t=s[i];
		s[i]=s[k-i];
		s[k-i]=t;
	}
	cout<<"reversed string is "<<s<<endl;
}

int main()
{
	string s;
	cout<<"enter string"<<endl;
	cin>>s;
	rev(s);
}