#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        long long int q;
        cin>>n>>q;
        vector<long long int>v(n);
        long long int sum2;
        long long int sum1;
        long long int sum3;
        vector<long long int>sum(n,0);
        for(auto &it:v) {
            cin>>it;
        }
        sum[0]=v[0];

        for(int i=1;i<n;i++) {
            sum[i]=sum[i-1]+v[i];
        }
        for(long long int i=1;i<=q;i++) {
            long long int l,r,k;
            cin>>l>>r>>k;
            sum2=(r-l+1)*k;
            if(l==1) sum1=0;
            else sum1=sum[l-2];
            sum3=sum[n-1]-sum[r-1];
            long long int result=sum1+sum2+sum3;
            if(result%2==0) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }  
    }
    return 0;
}