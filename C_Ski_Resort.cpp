#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        ll cnt=0;
        ll ans=0;
        for(auto &it:v) {
            cin>>it;
        }
        for(ll i=0;i<n;i++) {
            if(v[i]>q) {
                if(cnt>=k) {
                    ans+=((cnt-k+1)*(cnt-k+2))/2;
                }
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        if(cnt>=k) {
            ans+=((cnt-k+1)*(cnt-k+2))/2;
        }
        cout<<ans<<endl;      
    }
    return 0;
}