#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1=(k*l)/nl;
    int t2=(c*d);
    int t3=(p)/np;
    int x=min({t1,t2,t3});
    cout<<x/n<<endl;
    return 0;
}