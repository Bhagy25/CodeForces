#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++) {
            if(v[i+1]-v[i]<=k) {
                count++;
            }
            else if (v[i+1]-v[i]>k) {
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        cout<<n-1-maxi<<endl;
    }
    return 0;
}