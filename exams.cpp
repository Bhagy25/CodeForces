#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    if(3*n>=k) {
        cout<<3*n-k<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}