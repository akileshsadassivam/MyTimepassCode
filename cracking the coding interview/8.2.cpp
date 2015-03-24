#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>

using namespace std;

list<list<int> > getsubsets(list<int> a){
	list<list<int> > subsets;
	int max = (1<<a.size());
	for(int i=0;i<max;i++){
		list<int> subs;
		list<int>::iterator index=a.begin();
		int k=i;
		while(k>0){
			if((k&1)>0){
				subs.push_back(*index);
			}
			index++;
			k>>=1;
		}
		subsets.push_back(subs);
	}
	return subsets;
}

int main()
{
	int n;
	cout<<"enter array size "<<endl;
	cin>>n;
	int k;
	list<int> a;
	for(int i=0;i<n;i++){
		cin>>k;
		a.push_back(k);
	}
	list<list<int> > subsets;
	subsets = getsubsets(a);

	for(list<list<int> >::iterator i = subsets.begin();i!=subsets.end();i++){
		for(list<int>::iterator j = i->begin();j!=i->end();j++){
			cout<<*j<<" ";
		}
		cout<<endl;
	}
	
}