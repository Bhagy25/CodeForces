#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<str.size()-1;i++) {
            if(str[i]==str[i+1]) {
                count=1;
            }
        }
        if(count!=0) {
        cout<<count<<endl;
        }
        else {
            cout<<str.size()<<endl;
        }
    }
    return 0;
}