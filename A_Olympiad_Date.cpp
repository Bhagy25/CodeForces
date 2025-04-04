#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flag=false;
        vector<int>v(n);
        for(auto &it:v) {
            cin>>it;
        }
        vector<int>count(10,0);
        for(int i=0;i<n;i++) {
            count[v[i]]++;
            if(count[0]>=3 && count[1]>=1 && count[3]>=1 && count[2]>=2 && count[5]>=1) {
                cout<<i+1<<endl;
                flag=true;
                break;
            } 

        }
        if(!flag) {
            cout<<0<<endl;
        }
    }
    return 0;
}