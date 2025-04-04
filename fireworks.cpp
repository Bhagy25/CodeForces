#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int a,b,m;
        cin>>a>>b>>m;
        long long int ans=((m)/a)+((m)/b)+2;
        cout<<ans<<endl;
    }
    return 0;
}