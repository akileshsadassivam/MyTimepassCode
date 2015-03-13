#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
	unsigned int mask = ~0;
	unsigned int n,m,i,j;
	cout<<"Enter values for N=1024, M=21, i=7 & j=3"<<endl;
	n=1024;m=21;j=7;i=3;
	unsigned int l = mask - ((1 << j) -1);
	unsigned int r = (1 << i) -1;
	cout<<mask<<" "<<l<<" "<<r<<endl;
	unsigned int d = l | r;
	cout<<d<<endl;
	n = n & d;
	m = m<<i;
	n = n|m;
	cout<<n<<endl;
}