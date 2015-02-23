#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	s=s+s;
	int p=-1;
	p= s.find(t);

	if(p>0)
	{
		cout<<"is a rotation"<<endl;
	}
	else
		cout<<"is not a rotation"<<endl;
}