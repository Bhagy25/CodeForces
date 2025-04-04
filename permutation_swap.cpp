#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int mini=0;
        for(int i=0;i<n;i++) {
            
                mini=__gcd(mini,abs(v[i]-(i+1)));
            
        }
        cout<<mini<<endl;
    }
    return 0;
}