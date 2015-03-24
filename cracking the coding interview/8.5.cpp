#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <sstream>

using namespace std;


void printpar(int l, int r, char str[], int count){
	if(l<0 ||r<l){
		return;
	}
	if(r==0 && l==0){
		cout<<str<<endl;
	}
	else{
		if(l>0){
			str[count]='(';
			printpar(l-1,r,str,count+1);
		}
		if(r>l){
			str[count]=')';
			printpar(l,r-1,str,count+1);
		}
	}
}


int main()
{
	int n;
	cout<<"enter no. of parantheses"<<endl;
	cin>>n;
	int h=2*n;
	char str[h];// = new char[2*n];
	printpar(n,n,str,0);
	cout<<endl;
}