#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll mx=0;
        ll sum=0;
        ll max2=0;
        for(ll i=0;i<n;i++) {
            max2=max(max2,v[i]);
            sum+=max2-v[i];
            mx=max(mx,max2-v[i]);
        }
        cout<<mx+sum<<endl;
    }
    return 0;
}