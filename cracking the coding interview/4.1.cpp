#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

struct Tree{
	int val;
	struct Tree *left;
	struct Tree * right;
};

int minheight(Tree *t){
	if(t==NULL)
		return 0;
	return 1+min(minheight(t->left),minheight(t->right));
}

int maxheight(Tree *t)
{
	if(t==NULL)
		return 0;
	return 1+max(maxheight(t->left),maxheight(t->right));
}

int main()
{
	
}