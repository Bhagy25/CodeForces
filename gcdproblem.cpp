#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a,b,c=1;//a,b,c must be distinct
        for(ll a=2;a<=n-3;a++) {
            b=n-1-a;
            if(a+b==n-1 && __gcd(a,b)==1) {
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
        } 
    }
    return 0;
}