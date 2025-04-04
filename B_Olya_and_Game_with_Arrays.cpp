#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>a,b;
        ll mini=LLONG_MAX;
        for(ll i=0;i<n;i++) {
            ll m;
            cin>>m;
            b.resize(m);
            for(ll j=0;j<m;j++) {
                cin>>b[j];
            }
            sort(b.begin(),b.end());
            mini=min(mini,b[0]);
            a.push_back(b[1]);
        }
        sort(a.begin(),a.end());  
        a[0]=mini;
        ll sum=0;
        for(ll i=0;i<a.size();i++) {
            sum+=a[i];
        }  
        cout<<sum<<endl;
    }
    return 0;
}