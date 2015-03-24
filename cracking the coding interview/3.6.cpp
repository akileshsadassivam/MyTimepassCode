#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <stack>

using namespace std;



int main()
{
	int n,t;
	stack<int> s,r;
	cout<<"enter stack elements count"<<endl;
	cin>>n;
	cout<<"enter stack elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>t;
		s.push(t);
	}

	cout<<"the sorted stack :"<<endl;

	while(!s.empty()){
		int tmp = s.top();
		s.pop();
		while(!r.empty() && r.top()<tmp){
			s.push(r.top());
			r.pop();
		}
		r.push(tmp);
	}

	while(!r.empty()){
		cout<<r.top()<" ";
		r.pop();
	}

	cout<<endl;
}