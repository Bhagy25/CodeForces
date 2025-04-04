#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(auto &it :v ) {
            cin>>it;
        }
        int ans=0;
        int cnt;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0,cnt=1;i<n;i++,cnt++) {
            if(v[i]*cnt>=x) {
                ans++;
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}