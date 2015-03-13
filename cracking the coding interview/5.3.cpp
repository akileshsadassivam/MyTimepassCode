#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

bool getBit(unsigned int n, unsigned int index){
	return ((n & (1<<index))>0);
}

unsigned int setBit(unsigned int n, unsigned int index, bool bit){
	if(bit){
		return n | (1<<index);
	}
	else{
		unsigned int m = ~(1<<index);
		return n & m;
	}
}


unsigned int getNextNum(unsigned int n){

	if(n<=0) return -1;
	unsigned int pos=0,cnt1=0;
	//to get the first pos of 1 from left
	while(!getBit(n,pos)){
		pos++;
	}
	
	//count number of ones and get the first 0 after getting the first 1 in the rev step
	while(getBit(n,pos)){
		cnt1++,pos++;
	}
	
	//set the one at the 0 after getting 1
	n = setBit(n,pos,1);

	//turn  off prev one
	pos--;
	n = setBit(n,pos,0);
	cnt1--;

	//setting 0's
	for(unsigned int i=pos-1;i>=cnt1;i--){
		n=setBit(n,i,0);
	}

	//setting ones in the end
	for(unsigned int i=cnt1-1;i>=0;i--){
		n=setBit(n,i,1);
	}
	return n;
}

unsigned int getPrevNum(unsigned int n){

	if(n<=0) return -1;
	unsigned int pos=0,cnt0=0;

	while(getBit(n,pos)) pos++;

	while(!getBit(n,pos)){
		pos++;cnt0++;
	}

	n = setBit(n,pos,0);

	pos--;
	n = setBit(n,pos,1);
	cnt0--;

	for(unsigned int i=pos-1;i>=cnt0;i--){
		n = setBit(n,i,1);
	}

	for(unsigned int i=cnt0-1;i>=0;i--){
		n = setBit(n,i,0);
	}
	return n;
}

int main()
{
	unsigned int n;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<getNextNum(n)<<endl;
	cout<<getPrevNum(n)<<endl;
}