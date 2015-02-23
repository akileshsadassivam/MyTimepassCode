#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l = s.length();
	int f=0,e=0;
	for(int i=0;i<l;i++)
	{
		if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
		{
			f++;
		}
		e++;
		s[f]=s[e];
	}
	for(int i=f;i<e;i++)
	{
		s[i]='\0';
	}
	cout<<"new string is "<<s;
	cout<<endl;
}