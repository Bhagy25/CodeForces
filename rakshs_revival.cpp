#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,m,k;
        cin>>n>>m>>k;
        string str;
        cin>>str;
        int count=0;
        int ans=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='0') {
                count++;
                if(count==m) {
                    ans++;
                    count=0;
                    i+=k-1;
                }
            }
            else {
                    count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}