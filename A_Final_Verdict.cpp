#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum+=v[i];
        }
        float res=float(sum);
        int val=ceil(sum/n);
        val==x?cout<<"YES"<<endl:cout<<"NO"<<endl;
        
    }
    return 0;
}