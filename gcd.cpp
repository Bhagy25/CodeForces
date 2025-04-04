#include<bits/stdc++.h>
using namespace std;
int main () { 
    int x,y;
    cin>>x>>y;
    int gcd;
    for(int i=1;i<=x;i++) {
        if(x%i==0 && y%i==0) {
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    cout<<__gcd(x,y)<<endl;

}