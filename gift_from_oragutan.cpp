#include<bits/stdc++.h>
using namespace std;
//do not change first element of array
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int b[n],c[n];
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int max=a[0],min=a[0];
        for(int i=1;i<n;i++) {
            if(a[i]>max) {
                max=a[i];
            }
        }
        for(int i=1;i<n;i++) {
            if(a[i]<min) {
                min=a[i];
            }
        }
        b[0]=a[0];
        c[0]=a[0];
        for(int i=1;i<n;i++) {
            c[i]=max;
            b[i]=min;
        }
        for(int i=0;i<n;i++) {
            sum+=(c[i]-b[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}