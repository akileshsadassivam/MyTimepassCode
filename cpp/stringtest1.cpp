#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;

int main() {
    int t,k;
    
    cin>>t;
    while(t--){
        cin>>k;
        int h=0,v=0;
        for(int i=0;i<k;i++){
            if(i%2)
                {
                v++;
            }
            else
            {
                h++;
            }
        }
        cout<<h*v<<endl;
    }
    return 0;
}