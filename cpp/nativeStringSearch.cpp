#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int i,j;
	cout<<s1<<"\t"<<s2<<endl;
	for(i=0;i<s1.length()-s2.length();i++)
	{
		for(j=i;j<i+s2.length();j++)
		{
			cout<<s1[j]<<"\t"<<s2[j]<<endl;
			if(s1[j]!=s2[j])
				break;
		}
		if(j==i+s2.length())
		{
			cout<<"match found"<<endl;
			break;
		}
	}
}