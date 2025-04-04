#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n ,k;
        cin>>n>>k;
        int sum=0;
        if(k==1 or n<k) {
            cout<<n<<endl;
        }
        else {
            while(n!=0) {
                sum+=n%k;
                n=n/k;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}