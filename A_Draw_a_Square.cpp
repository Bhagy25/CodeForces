#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        int a=abs(l-d);
        int b=abs(d-r);
        int c=abs(r-u);
        int e=abs(l-u);
        int d1=d+u;
        int d2=l+r;
        
       if(a==b && b==c && c==e && a==e) {
            (d1==d2)?cout<<"Yes"<<endl:cout<<"No"<<endl;
       }
       else cout<<"No"<<endl;       
    }
    return 0;
}