#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>v(n,vector<ll>(m));
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<m;j++) {
                cin>>v[i][j];
            }
        }
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<m;j++) {
                ll mx=0;
                if(i>0) mx=max(mx,v[i-1][j]);
                if(i<n-1) mx=max(mx,v[i+1][j]);
                if(j>0) mx=max(mx,v[i][j-1]);
                if(j<m-1) mx=max(mx,v[i][j+1]);
                if(mx!=0 && mx<=v[i][j]) v[i][j]=mx;
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}