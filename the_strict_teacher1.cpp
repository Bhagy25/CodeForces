#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        ll n,m,q;
        cin>>n>>m>>q;
        vector<int>v(2);
        for(int i=0;i<2;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        ll a1;
        cin>>a1;
        if(a1>v[0] && a1<v[1]) {
            cout<<(v[1]-v[0])/2<<endl;// middle distance not middle location
        }
        else if(a1>v[0] && a1>v[1]) {
            cout<<n-v[1]<<endl;
        }
        else {
            cout<<v[0]-1<<endl;
        }
    }
    return 0;
}