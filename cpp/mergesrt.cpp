#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <stack>

using namespace std;

void merge(int arr[], int l, int m, int u){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = u-m;

	int L[n1],R[n2];

	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[m+1+j];
	}

	i=0;j=0;k=l;

	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			arr[k]=L[i];
			i++;k++;
		}
		else{
			arr[k]=R[j];
			j++;k++;
		}
	}

	while(i<n1){
		arr[k]=L[i];
		i++;k++;
	}

	while(j<n2){
		arr[k]=R[j];
		j++;k++;
	}
}

void mergesort(int arr[],int l, int u){
	if(l<u){
		int m = (l+u-1)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,u);
		merge(arr, l,m,u);
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
	mergesort(a,0,n-1);
	cout<<"sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}