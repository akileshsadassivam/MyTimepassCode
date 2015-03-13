#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	string s[10];
	for(int i=0;i<10;i++){
		cin>>s[i];
		sort(s[i].begin(),s[i].end());
	}
	int sz = sizeof(s)/sizeof(s[0]);
	sort(s, s+sz);
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<s[i]<<endl;
	}


}