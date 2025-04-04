#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll n ;
        cin>>n;
        vector<ll>v(n);
        for(auto &it:v) {
            cin>>it;
        }
        ll sum=v[0];
        ll cnt=0;
        for(int i=0;i<v.size();i++) {
            sum&=v[i];
            if(sum==0) {
                cnt++;
                sum=(i+1<n?v[i+1]:INT_MIN);
            }
        }
        if(cnt==0) {
            cnt=1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
