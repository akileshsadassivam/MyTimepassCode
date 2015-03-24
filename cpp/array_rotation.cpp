#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <sstream>

using namespace std;

int gcd(int a, int b){
	if(b==0)
	{
		return a;
	}
	else
		return gcd(b, a%b);
}

void rotate(int arr[], int n, int d){
	int i,j,k,temp;
	
	int lcm = gcd(n,d);
	for(int i=0;i<lcm;i++){
		temp = arr[i];
		j=i;
		while(true){
			k = j+d;
			if(k>=n){
				k=k-n;
			}
			if(k==i){
				break;
			}
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	cout<<"enter array size"<<endl;
	int n;
	cin>>n;
	cout<<"enter array to be rotated"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d;
	cout<<"enter by how many elements u wanna rotate the array"<<endl;
	cin>>d;
	rotate(a,n,d);

}