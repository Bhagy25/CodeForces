#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(auto &it:a) {
            cin>>it;
        }
        for(auto &it:b) {
            cin>>it;
        }
        vector<int>c(n);
        c=a;
        reverse(a.begin(),a.end());
        if(b==c) {
            cout<<"Bob"<<endl;
        }
        else if(b==a) {
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}