#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v) {
            cin>>it;
        }
        int l1=0;
        int l2=0;
        int i=0;
        int j=0;
        while(l1<n && v[0]==v[i]) {
            l1++;
            i++;
        }
        while(l2<n && v[n-1]==v[n-j-1]) {
            l2++;
            j++;
        }
        int res=n;
        if(v[0]==v[n-1]) {
            res-=l1;
            res-=l2;            
        }
        else {
            res-=max(l1,l2);
        }
        cout<<max(0,res)<<endl;
    }
    return 0;
}