#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            v[i]=i+1;
        }
        if(n%2==0) {
            cout<<-1<<endl;
        }
        else {
            reverse(v.begin(),v.end());
            for(auto i:v) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}