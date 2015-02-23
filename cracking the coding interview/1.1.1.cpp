#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int c=0,f=0;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		int v=s[i];
		if((c&(1<<v))>0)
		{
			f++;
			break;
		}
		c=c|(1<<v);
	}
	if(!f)
	{
		cout<<"has unique chars"<<endl;
	}
	else
	{
		cout<<"has repetitions"<<endl;
	}
}