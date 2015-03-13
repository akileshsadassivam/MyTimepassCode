#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

bool findx(int *mat[10],int m, int n, int x){
	int row = 0;
	int col = n-1;
	while(row<m && col>=0){
		if(*(*(mat+row)+col)==x){
			return true;
		}
		else if(*(*(mat+row)+col)<x){
			row++;
		}
		else{
			col--;
		}
	}
	return false;
}

int main()
{
	int mat[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			mat[i][j]=i+j;
		}
	}
	int x;
	cin>>x;
	bool f = findx(mat,10,10, x);
	if(f){
		cout<<"element present"<<endl;
	}
	else{
		cout<<"element not present"<<endl;
	}
}