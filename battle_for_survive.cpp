#include<bits/stdc++.h>
using namespace std;
//fighters indexes do not change
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        vector<long long int>v(n);
        for(long long int i=0;i<n;i++) {
            cin>>v[i];
        }
        long long int sum=0;
        for(long long int i=0;i<n-2;i++) {
            sum+=v[i];
        }
        long long int result=v[n-1]-(v[n-2]-sum);
        cout<<result<<endl;
    }
    return 0;
}