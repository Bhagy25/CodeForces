#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        ll ans=0;
        ll cnt=0;
        for(ll i=0;i<str.length();i++) {
            if(str[i]=='0') ans+=cnt+(cnt>0);
            else {
                cnt++;
            }
        }
        cout<<ans<<endl;
    }
}