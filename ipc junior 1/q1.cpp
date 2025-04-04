#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        if(n%2==0) {
            cout<<"ESCAPE"<<endl;
        }
        else if(n%2!=0 || n==0) {
            cout<<"TRAPPED"<<endl;
        }
    }
    return 0;
}