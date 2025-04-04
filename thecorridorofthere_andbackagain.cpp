#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++) {
            cin>>vec[i].first>>vec[i].second;
        }
        sort(vec.begin(),vec.end());
        int mini=INT_MAX;
        for(int i=0;i<n;i++) {
            mini=min(mini,(vec[i].first-1+(int)ceil(vec[i].second/2.0)));
        }
        cout<<mini<<endl;
    }
    return 0;
}