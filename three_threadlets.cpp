#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int sum=a+b+c;
        int x=min(min(a,b),c);
        int y=max(max(a,b),c);
        int z=sum-x-y;
        if(z%x==0 && y%x==0 && (y/x+z/x<=5)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}