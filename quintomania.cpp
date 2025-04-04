#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++) {
        if(abs(arr[i]-arr[i+1])==5 || abs(arr[i]-arr[i+1])==7){
                count++;
            }
        }
        if(count==(n-1)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}