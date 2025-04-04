#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main () {
    ll k,n,w;
    cin>>k>>n>>w;
    ll sum=(w*(w+1))/2;
    ll final=k*sum;
    if(final<n) {
        cout<<"0"<<endl;
    }
    else {
        cout<<final-n<<endl;
    }
    return 0;


}