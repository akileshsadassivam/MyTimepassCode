#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <sstream>

using namespace std;

int ways(int n, int denom){
	int next_denom =0;
	switch(denom){
		case 25:
			next_denom=10;
			break;
		case 10:
			next_denom=5;
			break;
		case 5:
			next_denom=1;
			break;
		case 1:
			return 1;
	};
	int wys = 0;
	for(int i=0;i*denom<=n;i++){
		wys+=ways(n- i*denom, next_denom);
	}
	return wys;
}

int main()
{
	cout<<"enter amount"<<endl;
	int n;
	cin>>n;
	cout<<"number of ways u can get the amount mentioned is "<<ways(n,25)<<endl;
}