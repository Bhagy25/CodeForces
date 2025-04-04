#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int x,y;
        if(b==1) {
            cout<<"1"<<endl;
            cout<<a<<" "<<b<<endl;
        }
        else {
            cout<<"2"<<endl;
            cout<<"1"<<" "<<b-1<<endl;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}