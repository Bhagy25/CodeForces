#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,vector<int>>m1;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            m1[a[i]].push_back(i);
        }
        vector<vector<int>>v1;
        for(auto i:m1) {
            v1.push_back(i.second);
        }
        sort(v1.begin(),v1.end());
        int m;
        cin>>m;
        for(int i=0;i<m;i++) {
            string s;
            cin>>s;
            if(s.length()!=n) {
                cout<<"NO"<<endl;
            }
            else{
                map<char,vector<int>>m2;
                for(int j=0;j<s.length();j++) {
                    m2[s[j]].push_back(j);
                }
                vector<vector<int>>v2;
                for(auto el:m2)  {
                    v2.push_back(el.second);
                }
                sort(v2.begin(),v2.end());
                if(v1==v2) {
                    cout<<"YES"<<endl;
        
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}