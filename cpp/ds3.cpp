#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void prnt(char * p)
{
	if(*p=='\0')
		return;
	p++;
	prnt(p);
	cout<<*p;
}

int main()
{
	char a[] = "abcdefgh";
	prnt(a);
}

