#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int s=600;
        
        for(int i=1;i<=n;i++){
            if(i==1) cout<<s<<" ";
            else {
            int x;
            cin>>x;
            s+=x;
            cout<<s<<" ";
            }
        }
        cout<<endl;        
    }
    return 0;
}