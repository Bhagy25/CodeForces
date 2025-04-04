#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll a,ll b,ll c) {
    if(b>=a && c>=a) {
        return min(b-a,c-a);
    }
    if(a>=b && a>=c) {
        return min(a-b,a-c);
    }
    else return 0;
    return 0;
}
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll xa,ya;
        cin>>xa>>ya;
        ll xb,yb;
        cin>>xb>>yb;
        ll xc,yc;
        cin>>xc>>yc;
        ll ans=solve(xa,xb,xc)+solve(ya,yb,yc)+1;
        cout<<ans<<endl;  
    }
    return 0;
}