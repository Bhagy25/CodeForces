#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        if(n==1) {
            cout<<"0"<<endl;
        }
        else {
            n-=k;
            ll ans=1;
            ans+=max(0ll,(ll)ceil((n*1.0)/(k-1)));
            cout<<ans<<endl;
        }
    }
    return 0;
}