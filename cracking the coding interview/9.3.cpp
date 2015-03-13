#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;



int findRotated(int a[], int l, int u, int x)
{
	while(l<=u){
		int m = (u+l)/2;
		if(a[m]==x){
			return m;
		}
		else if(a[l]<a[m]){
			if(x>a[m]){
				l=m+1;
			}
			else if(x>=a[l]){
				u=m-1;
			}
			else{
				l=m+1;
			}
		}
		else if(x<a[m]){
			u=m-1;
		}
		else if(x<a[u]){
			l=m+1;
		}
		else{
			u=m-1;
		}
	}
	return -1;
}

int main()
{
	int a[10];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"enter elt to be searched"<<endl;
	int x;
	cin>>x;
	int pos = findRotated(a,0,9,x);
	cout<<pos<<endl;
}