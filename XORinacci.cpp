#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a,b,n;
        cin>>a>>b>>n;
        if(n%3==0) {
            cout<<a<<endl;
        }
        else if(n%3==1) {
            cout<<b<<endl;
        }
        else if(n%3==2) {
            cout<<(a^b)<<endl;
        }
    }
    return 0;

}