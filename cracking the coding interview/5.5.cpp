#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
	cout<<"enter the 2 numbers for which u want to find the number of bits to be changed to get one from the other"<<endl;
	int a,b;
	cin>>a>>b;
	int cnt=0;
	for(int i = a^b; i != 0; i >>= 1){
		cnt += i&1;
	}
	cout<<"no. of bits ti be changed is "<<cnt<<endl;

}