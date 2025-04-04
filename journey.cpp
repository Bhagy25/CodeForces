#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--) {
        long long n,a,b,c;
        cin>>n>>a>>b>>c;
        long long blocks=n/(a+b+c);
        long long result=blocks*3;
        n=n%(a+b+c);
        if(n>0) {
            n-=a;
            ++result;
        }
        if(n>0){
            n-=b;
            ++result;
        }
        if(n>0) {
            n-=c;
            ++result;
        }
        cout<<result<<endl;
    }
    return 0;
}