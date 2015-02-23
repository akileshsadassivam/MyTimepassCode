#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

void removeduplicates(string s)
{
	char t;
	int k=s.length()-1;
	for(string::size_type i=0;i<k;i++)
	{
		if(s[i]=='\0')
			continue;
		for(string::size_type j=i+1;j<=k;j++)
		{
			if(s[i]==s[j])
			{
				s[j]='\0';
			}
		}
	}
	cout<<"string with duplicated removed is "<<s<<endl;
}

int main()
{
	string s;
	cout<<"enter string to remove duplicates"<<endl;
	cin>>s;
	removeduplicates(s);
}