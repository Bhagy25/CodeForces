#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main () {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        if(n&(n-1)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}