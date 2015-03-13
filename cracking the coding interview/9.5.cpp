#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;



int main()
{
	string st[]={"abc","","def","","","ghi","","","","xyz",""};
	string str;
	cin>> str;
	if(str == ""){
		for(int i=0;i<11;i++){
			if(st[i].compare(str)==0){
				cout<<i<<endl;
				exit(0);
			}
		}
	}
	int f = 0,l=10;
	while(f<=l){
		while(f<=l && st[l]==""){
			l--;
		}
		if(l<f){
			cout<<"-1"<<endl;
			break;
		}
		int m = (f+l)/2;
		while(st[m]==""){
			m++;
		}
		int c = str.compare(st[m]);
		if(c==0){
			cout<<m<<endl;
			break;
		}
		if(c>0){
			f=m+1;
		}
		else{
			l=m-1;
		}
	}
}