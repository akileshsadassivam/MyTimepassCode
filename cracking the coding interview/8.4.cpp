#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <sstream>

using namespace std;

list<string> getperms(string s){
	list<string> perms;
	if(s.empty()){
		cout<<"is empty()"<<endl;
		return nullptr;
	}

	cout<<s<<endl;
	cout<<1<<endl;
	
	if(s.size()==0){
		cout<<"size is 0"<<endl;
		perms.push_back("");
		return perms;
	}
	cout<<2<<endl;
	char char0 = s.at(0);
	stringstream ss;
	string ch;
	ss<<char0;
	ss>>ch;
	string rest = s.substr(1);
	list<string> words = getperms(rest);
	for(list<string>::iterator it = words.begin();it!=words.end();it++){
		for(int i=0;i<=it->length();i++){
			cout<<"temp val = "<<*it<<endl;
			perms.push_back(it->insert(i,ch));
		}
	}
	cout<<3<<endl;

	return perms;
}

int main()
{
	cout<<"enter string to find all permutations"<<endl;
	string s;
	cin>>s;
	cout<<"the permutations"<<endl;
	list<string> permutations = getperms(s);
	cout<<"size = "<<permutations.size()<<endl;
	for(list<string>::iterator i= permutations.begin(); i!=permutations.end(); i++){
		cout<<"#####"<<endl;
		cout<<*i<<endl;
	}
}