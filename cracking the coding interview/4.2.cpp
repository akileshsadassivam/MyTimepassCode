#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;


int main()
{
	queue<int> q;
	for(int i=0;i<10;i++)
	{
		q.push(i);
	}
	for(int i=0;i<10;i++)
	{
		cout<<q.front()<<"\t";
		q.pop();
	}
	cout<<endl;
}