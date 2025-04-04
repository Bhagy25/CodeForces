#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int mini=INT16_MAX;
    vector<int>v(m);
    for(int i=0;i<m;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=n;i<=m;i++) {
        mini=min(mini,abs(v[i-n]-v[i-1]));
    }
    cout<<mini<<endl;
    return 0;
}