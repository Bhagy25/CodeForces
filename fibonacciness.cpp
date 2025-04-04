#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int x1,x2,x3;
        int count=0;
        int count1=0;

        x1=a1+a2;
        x2=a4-a2;
        if(a1+a2==x1) {
            count++;
        }
        if(a2+x1==a4) {
            count++;
        }
        if(x1+a4==a5) {
            count++;
        }

        if(a1+a2==x2) {
            count1++;
        }
        if(a2+x2==a4) {
            count1++;
        }
        if(x2+a4==a5) {
            count1++;
        }
        cout<<max(count,count1)<<endl;

    }
    return 0;
}