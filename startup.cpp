#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>b_c(k,0);
        for(int i=0;i<k;i++) {
            int b,c;
            cin>>b>>c;
            b_c[b-1]+=c;
        }
        sort(b_c.rbegin(),b_c.rend());
        long long int sum=0;
        for(int i=0;i<min(n,k);i++) {
            sum+=b_c[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}