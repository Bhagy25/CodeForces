#include<bits/stdc++.h>
using namespace std;
int lcm(int x,int y) {
    int maxi;
    if(x>y) maxi=x;
    else maxi=y;
    while(1) {
        if(maxi%x==0 && maxi%y==0) {
            return maxi;
            break;
        }
        ++maxi;
        
    }
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;
    }
    return 0;
}