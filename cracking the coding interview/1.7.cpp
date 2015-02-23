#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	int a[10][10];
	int h=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=h%17;
			h++;
		}
	}

	int rows[10],cols[10];
	for(int i=0;i<10;i++)
	{
		cols[i]=rows[i]=0;
	}

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<a[i][j]<<"\t";
			if(a[i][j]==0)
			{
				rows[i]=1;
				cols[j]=1;
			}
		}
		cout<<endl;
	}

	for(int i=0;i<10;i++)
	{
		cout<<cols[i]<<"\t"<<rows[i]<<endl;
	}

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(rows[i]==1 || cols[j]==1)
			{
				a[i][j]=0;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}