#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        int a,b;
        cin>>a>>b;
        if(a>=b) {
            cout<<a<<endl;
        }
        else if(b>=2*a) {
            cout<<0<<endl;
        }
        else if(b<2*a) {
            int x=b-a;
            a=b-2*x;
            cout<<a<<endl;
        }
    }
    return 0;
}