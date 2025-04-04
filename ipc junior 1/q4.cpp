#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int c=0;
    int ec=0;
    if(m%n==0) {
        cout<<m/n;
    }
    else {
        int c=m/n;
        int ec=m%n;
        
        if(k==n) {
            c=c+ec;
        }
        else if(ec<=k) {
            c=c+1;
        }
        cout<<c;
        
    }
    
    return 0;
}