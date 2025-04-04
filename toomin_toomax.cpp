#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>b(n,0);
        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        int i=b[0];
        int j=b[1];
        int k=b[n-2];
        int l=b[n-1];
        int sum=abs(l-i)+abs(l-j)+abs(k-i)+abs(k-j); 
        cout<<sum<<endl; 
    }
    return 0;
}
    
    