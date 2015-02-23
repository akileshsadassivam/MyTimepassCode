#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

class HashEntry{
private:
	int key;
	int val;
public:
	HashEntry(int key,int val)
	{
		this->key=key;
		this->val=val;
	}
	int getkey()
	{
		return key;
	}
	int getval()
	{
		return val;
	}
};

class HashTable{
private:
	HashEntry **table;
	int size;
public:
	HashTable()
	{
		size=200;
		table = new HashEntry*[size];
		for(int i=0;i<size;i++)
		{
			table[i]=NULL;
		}
	}
	int get(int key)
	{
		int hash = key%size;
		while(table[hash]!=NULL && table[hash]->getkey()!=key)
		{
			hash= (++hash)%size;
		}
		if(table[hash]==NULL)
		{
			return -1;
		}
		else
		{
			return table[hash]->getval();
		}
	}
	void put(int key,int val)
	{
		int hash = key%size;
		while(table[hash]!=NULL && table[hash]->getkey()!=key)
		{
			hash=(++hash)%size;
		}
		if(table[hash]!=NULL)
		{
			delete table[hash];
		}
		table[hash] = new HashEntry(key,val);
	}
	~HashTable()
	{
		for(int i=0;i<size;i++)
		{
			delete table[i];
		}
		delete table;
	}

};




int main()
{
	HashTable h;
	h.put(2,3);
	h.put(4,5);
	cout<<h.get(2)<<"\t"<<h.get(4)<<endl;
}