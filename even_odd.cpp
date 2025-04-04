#include<bits/stdc++.h>
using namespace std;
int main () {
    long long int n;
    long long int k;
    cin>>n>>k;
    if(n%2==0) {
        if(k<=n/2 && k>0) {
            cout<<2*k-1<<endl;
        }
        else if(k>n/2) {
            k=k-n/2;
            cout<<2*k<<endl;
        }
    }
    else if(n%2!=0) {
        if(k<=(n+1)/2 && k>0) {
            cout<<2*k-1<<endl;
        }
        else if(k>(n+1)/2) {
            k=k-(n+1)/2;
            cout<<2*k<<endl;
        } 
    }
    return 0;
}