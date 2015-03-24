#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <stack>

using namespace std;

void swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int arr[], int l, int u){
	int piv = arr[u];
	int i = l-1;
	for(int j=l;j<=u-1;j++){
		if(arr[j]<=piv){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[u]);
	return i+1;
}


void quick(int arr[], int l, int u){
	if(l<u){
		int p = partition(arr,l,u);
		quick(arr, l,p-1);
		quick(arr, p+1,u);
	}
}


int main(){
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick(a,0,n-1);
	cout<<"sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}