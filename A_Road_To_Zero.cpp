#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int x,y;
        cin>>x>>y;
        long long int a,b;
        cin>>a>>b;
        long long int sum=0;
        if(x>y) {
            swap(x,y);
        }
        sum+=(y-x)*a;
        if(2*a<b) {
            sum+=(x*a*2);
        }
        else {
            sum+=(x*b);
        }
        cout<<sum<<endl;
    }
    return 0;
}