#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <stack>

using namespace std;

class Stack{
	stack<int> stk, minstk;
public:
	Stack(){};
	void intpush(int n){
		stk.push(n);
		
		if(minstk.empty() || n<minstk.top()){
			minstk.push(n);
		}
	}
	void intpop(){
		if(stk.top() == minstk.top()){
			minstk.pop();
		}
		stk.pop();
	}
	int inttop(){
		return stk.top();
	}
	int inttopmin(){
		return minstk.top();
	}


};

int main()
{
	int n,t;
	Stack st;
	cout<<"enter stack elements count"<<endl;
	cin>>n;
	cout<<"enter stack elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>t;
		st.intpush(t);
	}
	cout<<"min elt is "<<st.inttopmin()<<endl;
	cout<<"top elt is is "<<st.inttop()<<endl;
}