#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
	double d;
	cin>>d;
	int i = int(d);
	d=d-i;
	string intpart="", decpart="";
	while(i>0){
		int rem = i%2;
		if(rem==1){
			intpart = "1" + intpart;
		}
		else{
			intpart = "0" + intpart;
		}
		i >>=1;
	}
	while(d>0){
		if(decpart.length()>15){
			cout<<"ERROR"<<endl;
			exit(0);
		}
		if(d == 1){
			decpart += "1";
			break;
		}
		double t = d*2;
		if(t>=1){
			decpart += "1";
			d = t-1;
		}else{
			decpart+="0";
			d=t;
		}
		
	}
	cout<<"The given number in bnary is "<<intpart<<"."<<decpart<<endl;
}