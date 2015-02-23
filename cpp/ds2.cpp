#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main()
{
	cout<<"enter number of elements"<<endl;
	int n;
	cin>>n;
	int *a;
	a = new int [n];
	cout<<"eter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>*(a+i);
	}
	int t=0,j=0;
	for(int i=1;i<n;i++)
	{
		t=*(a+i);
		j=i-1;
		while(j>=0 && *(a+j)>t)
		{
			*(a+j+1)=*(a+j);
			*(a+j)=t;
			j--;
		}
	}
	cout<<"sorted list is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}