#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n,0);
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++) {
            if(sum+a[i]<=k) {
                sum+=a[i];
            }
            else {
                break;
            }
        }
        cout<<k-sum<<endl;
    }
    return 0;

}