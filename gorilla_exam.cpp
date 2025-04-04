#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        map<int,int>m;
        int temp;
        for(int i=0;i<n;i++) {
            cin>>temp;
            m[temp]++;
        }
        vector<int>v;
        for(auto i:m) {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        int ans=v.size();
        for(int i=0;i<v.size();i++) {
            k-=v[i];
            if(k<0) {
                break;
            }
            ans--;
        }
        cout<<max(ans,1)<<endl;
    }
    return 0;
}