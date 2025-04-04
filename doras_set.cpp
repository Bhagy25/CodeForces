#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int l,r;
        cin>>l>>r;
        int odd=0;
        for(int i=l;i<=r;i++) {
            if(i%2!=0) {
                odd++;
            }
        }
        cout<<odd/2<<endl;
    }
    return 0;
}