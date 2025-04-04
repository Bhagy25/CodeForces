#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
    ll n,k;
    cin>>n>>k;
    while(k!=0) {
        if(n%10!=0) {
            n--;
        }
        else {
            n=n/10;
        }
        k--;
    }
    cout<<n<<endl;

}