#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(auto &it:a) {
            cin>>it;
        }
        for(auto &i:b) {
            cin>>i;
        }
        
        ll count=0;
        for(ll i=0;i<n;i++) {
            if(a[i]-b[i]<0) {
                count++;
            }
        }
        if(count>=2) {
            cout<<"NO"<<endl;
        }
        else if(count==0) {
            cout<<"YES"<<endl;
        }
        else {
            ll maxi=0;
            ll mini=LLONG_MAX;
            for(ll i=0;i<n;i++) {
                if(a[i]-b[i]<0) {
                    maxi=max(maxi,b[i]-a[i]);
                }
                else {
                    mini=min(mini,a[i]-b[i]);
                }
            }
            
            if(maxi<=mini) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}