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
	HashEntry * next;
public:
	HashEntry(int key,int val)
	{
		this->key=key;
		this->val=val;
		next=NULL;
	}
	int getkey()
	{
		return key;
	}
	int getval()
	{
		return val;
	}
	void setval(int val)
	{
		this->val=val;
	}
	HashEntry * getnext()
	{
		return next;
	}
	void setNext(HashEntry * q)
	{
		this->next=q;
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
		if(table[hash]==NULL)
			return -1;
		else
		{
			HashEntry * p=table[hash];
			while(p!=NULL && p->getkey()!=key)
			{
				p=p->getnext();
			}
			if(p==NULL)
				return -1;
			else
				return p->getval();
		}
	}
	void put(int key,int val)
	{
		int hash = key%size;
		if(table[hash]==NULL)
		{
			table[hash]= new HashEntry(key,val);
		}
		else
		{
			HashEntry *p=table[hash];
			while(p->getnext()!=NULL)
			{
				p=p->getnext();
			}
				HashEntry *q;
				q= new HashEntry(key,val);
				p->setNext(q);
				q->setval(val);
		}
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