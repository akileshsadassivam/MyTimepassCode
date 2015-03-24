#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

string countAndSay(int n) {
          string ans("1");
    if (n == 1)
        return ans;

    while (--n) {
        string temp = ans;
        ans.clear();
        int count = 1;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == temp[i + 1])
                count++;
            else {
                ans.push_back(count + '0');
                ans.push_back(temp[i]);
                count = 1;
            }
        }
        cout<<ans<<endl;
    }
    return ans;
    }

int main(){
    int n;
    cin>>n;
    cout<<"count say of "<<n<<" is "<<countAndSay(n)<<endl;
}