#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int fibonacci(int n){
	if(n<=0){
		cout<<"error"<<endl;
		return -1;
	}
	if(n==0){
		cout<<0<<endl;
	}
	int a=1,b=1;
	for(int i=3;i<=n;i++)	{
		int c = a+b;
		a=b;
		b=c;
	}
	return b;
}

int fibnacci_recursion(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else if(n>1){
		return fibnacci_recursion(n-1)+fibnacci_recursion(n-2);
	}
	else{
		return -1;
	}
}

int main()
{
	cout<<"enter limit for caculating fibonacci series"<<endl;
	int n;
	cin>>n;
	cout<<"fibonacci number using iterative method : "<<fibonacci(n)<<endl;
	
	cout<<"fibonacci number using recursive method : "<<fibnacci_recursion(n)<<endl;
	
}