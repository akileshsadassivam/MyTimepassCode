#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
	string s = "the da vinci code";
	int l=s.length();
	cout<<l<<endl;
	for(int i=0;i<l/2;i++)
	{
		char t = s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=t;
	}
	int f=0,e=0;
	while(e<=l)
	{
		while(s[e]!=' '&&s[e]!='\0')
			e++;
		e--;
		int i=f;
		int j=e;
		while(j>i)
		{
			char t;
			t=s[j];
			s[j]=s[i];
			s[i]=t;
			j--;i++;
		}
		f=e+2;
		e=f;
	}
	cout<<s<<endl;
}