#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        string s="";
        for(int i=1;i<=12;i++) {
            if(i==a || i==b) s+='r';
            if(i==c || i==d) s+='b';
        }
        cout<<(s=="rbrb" || s=="brbr"? "YES\n":"NO\n");
    }
    return 0;
}