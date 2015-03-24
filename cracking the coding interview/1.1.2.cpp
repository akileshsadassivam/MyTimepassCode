#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;


int main()
{
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"the duplicates are"<<endl;
	for(int i=0;i<n;i++){
		if(a[abs(a[i])]>0){
			a[abs(a[i])] = -a[abs(a[i])];
		}
		else
			cout<<abs(a[i])<<" ";
	}
	cout<<endl;
}