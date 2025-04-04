#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x=log2(n-1);
        int start=1<<x;
        for(int i=n-1;i>=start;i--) {
            cout<<i<<" ";
        }
        for(int i=0;i<start;i++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}