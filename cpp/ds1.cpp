#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


class Arrays
{
	int a[20];
	int n;
public:
	Arrays()
	{
		n=0;
		for(int i=0;i<20;i++)
		{
			a[i]=0;
		}
	}
	void disp()
	{
		for(int i=0;i<n;i++)
		{
			cout<<*(a+i)<<" ";
		}
		cout<<endl;
	}
	void initarray()
	{
		for(int i=0;i<20;i++)
		{
			a[i]=0;
		}
		cout<<"Enter number of elements (<20)"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>*(a+i);
		}
		cout<<endl;
		disp();
	}
	void ins()
	{
		cout<<"enter position where number is to be inserted"<<endl;
		int pos;
		cin>>pos;
		for(int i=n;i>=pos;i--)
		{
			*(a+i+1)=*(a+i);
		}
		cout<<"enter element to be inserted"<<endl;
		cin>>*(a+pos);
		n++;
		cout<<endl;
		disp();
	}
	void del()
	{
		cout<<"enter position where element is to be deleted"<<endl;
		int pos;
		cin>>pos;
		for(int i=pos;i<20;i++)
		{
			*(a+i)=*(a+i+1);
		}
		cout<<endl;
		n--;
		disp();
	}
	void delall()
	{
		for(int i=0;i<n;i++)
		{
			*(a+i)=0;
		}
		cout<<endl;
		disp();
	}
};


int main()
{
	Arrays *p=new Arrays();
	cout<<"1 : new array\n2 : insert\n3 : delete\n4 : destroy\n5 : exit"<<endl;
	int c;
	do{
	cout<<"enter choice"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
			p->initarray();
			break;
		case 2:
			p->ins();
			break;
		case 3:
			p->del();
			break;
		case 4:
			p->delall();
			break;
		case 5:
			break;
		default:
			cout<<"invalid choice"<<endl;
	}
	}while(c!=5);
}