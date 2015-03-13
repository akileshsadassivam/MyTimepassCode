#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;


void merge(int a[], int b[], int n){
	int i=n-1,j=n-1,k=2*n-1;
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			b[k--]=a[i--];
		}
		else{
			b[k--]=b[j--];
		}
	}
	while(i>=0){
		b[k--]=a[i--];
	}
}

int main()
{
	int a[20];
	int b[40];
	for(int i=0;i<20;i++){
		a[i]=i;
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	for(int i=0;i<20;i++){
		b[i]=40+i;
		cout<<b[i]<<"  ";
	}
	cout<<endl;
	merge(a,b,20);
	for(int i=0;i<40;i++){
		cout<<b[i]<<"  ";
	}
	cout<<endl;
}