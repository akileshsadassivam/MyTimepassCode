#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
	cout<<"enter for which u wanna swap odd and even pos bits"<<endl;
	unsigned int a;
	cin>>a;
	unsigned int b = ((a & 0xAAAAAAAA) >> 1) | ((a & 0x55555555 & a) << 1);
	cout<<"no. of bits ti be changed is "<<b<<endl;

	for(int i=0;i<32;i++){
		if(a & 0x80000000)
			cout<<1;
		else
			cout<<0;
		a<<=1;
	}
	cout<<endl;
	for(int i=0;i<32;i++){
		if(b & 0x80000000)
			cout<<1;
		else
			cout<<0;
		b<<=1;
	}
	cout<<endl;
}