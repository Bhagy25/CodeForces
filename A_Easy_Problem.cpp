#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1,j=n-1;i<=n-1,j>=1;i++,j--) {
            if(i+j==n) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
