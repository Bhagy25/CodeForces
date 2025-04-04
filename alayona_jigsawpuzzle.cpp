#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int count=0;
        int sum=0;
        int a[n];
        int m=1;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) {
            sum+=a[i];
            for(int j=1;j<=100;j=j+2) {
                if(sum==(j*j)) {
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
     }
     return 0;
}
