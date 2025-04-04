#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &it:v) {
            cin>>it;
        }
        for(int i=0;i<n-2;i++) {
            if(v[i]<0) {
                break;
            }
            v[i+1]-=2*v[i];
            v[i+2]-=v[i];
            v[i]-=v[i];
        }
        if(count(v.begin(),v.end(),0)==n) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}