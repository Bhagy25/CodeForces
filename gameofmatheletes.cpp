#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int count=0;
        sort(v.begin(),v.end());
        int j=n-1;
        int i=0;
        while(i<j){
            if(v[i]+v[j]==k) {
                count++;
                i++;
                j--;
            }
            else if(v[i]+v[j]>k) {
                j--;
            }
            else if(v[i]+v[j]<k) {
                i++;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}