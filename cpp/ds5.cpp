#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class stack
{
private:
	int top;
	int s[20];
public:
	stack()
	{
		top = -1;
		for(int i=0;i<20;i++)
		{
			s[i]=0;
		}
	}
	void display()
	{
		for(int i =0;i<=top;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	void initstack()
	{
		int n;
		cout<<"enter size of stack"<<endl;
		cin>>n;
		cout<<"enter stack elements one by one"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>s[++top];
		}
		display();
	}
	void push(int k)
	{
		if(top==19)
		{
			cout<<"stack overflow error"<<endl;
			return;
		}
		top++;
		s[top]=k;
		display();
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"stack underflow error"<<endl;
			return;
		}
		top--;
		display();
	}
};

int main()
{
	stack s;
	s.initstack();
	cout<<"\t1 : push\t2 : pop\t 3: exit";
	int c;
	do{
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"enter element to be pushed"<<endl;
		int k;
		cin>>k;
		s.push(k);
		break;
		case 2:
		s.pop();
		break;
		case 3:
		break;
		default:
		cout<<"invalid i/p"<<endl;
	}
}while(c!=3);
}

