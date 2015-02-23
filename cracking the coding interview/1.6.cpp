#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
using namespace std;

void rotate(int *a)
{
	
}

int main()
{
	cout<<"normal image"<<endl;

	int a[10][10];
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=i+j;
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<"rotated image"<<endl;
	

	for(int i=0;i<5;i++)
	{
		for(int j=i;j<10-i;j++)
		{
			int t = a[i][j];
			cout<<"i = "<<i<<" "<<"j = "<<j<<" "<<"a[j][i] = "<<a[i][j]<<"\t";
			a[i][j]=a[10-j][i];
			a[10-j][i]=a[10-i][10-j];
			a[10-i][10-j]=a[j][10-i];
			a[j][10-i]=t;
		}
		cout<<endl;
	}

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=i+j;
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}

}