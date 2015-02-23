#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstdio>
#include <algorithm>
using namespace std;

bool anagram(string s1,string s2)
{
	int l1,l2;
	l1=s1.length();
	l2=s2.length();
	if(l1!=l2) return false;
	char a1[l1];
	char a2[l2];
	strcpy(a1,s1.c_str());
	strcpy(a2,s2.c_str());
	sort(a1, a1+l1);
	sort(a2,a2+l1);
	for(int i=0;i<l1;i++)
	{
		if(a1[i]!=a2[i]) return false;
	}
	return true;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(anagram(s1,s2))
		cout<<"is an anagram"<<endl;
	else
		cout<<"is not an anagram"<<endl;
}