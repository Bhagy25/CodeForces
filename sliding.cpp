#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        long long int sum=0;
        for(int i=r+1;i<=n;i++) {// for balls changing column who are are at position (x,1) 1 is fixed
            sum+=m;
        }
        for(int j=r+1;j<=n;j++) {// for balls of r+1 columns and m-1 balls which do not have column not equal to 1
            sum+=m-1;
        }
        sum+=m-c;// for remaining balls after ball at r,c is removed
        cout<<sum<<endl;
    }
    return 0;
}