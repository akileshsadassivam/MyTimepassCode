#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

 uint64_t fact(uint64_t n){
        if(n==1 || n==0){
            return 1;
        }
        else
            return n*fact(n-1);
    }

    vector<uint64_t> getRow(uint64_t rowIndex) {
        vector<uint64_t> res;
        for (uint64_t i = 0; i <= rowIndex; i++) {
            res.push_back((uint64_t)(fact(rowIndex)/(fact(rowIndex-i)*fact(i))));
        }
        return res;
    }
    
   

int main(){
	cout<<"enter row for pascal triangle"<<endl;
	uint64_t n;
	cin>>n;
	vector<uint64_t> pascal = getRow(n);
	
		for(uint64_t j=0;j<=n;j++){
			cout<<pascal[j]<<" ";
		}
		cout<<endl;
	
}