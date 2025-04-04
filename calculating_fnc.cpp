#include<bits/stdc++.h>
using namespace std;
int main () {
    long long int n;
    cin>>n;
    long long int a;
    long long int result=0;
    if(n%2!=0) {
        a=(n+1)/2;
        result=a*a-a*(a+1);
    }
    else {
        a=n/2;
        result=a*(a+1)-a*a;
    }
    cout<<result<<endl;
}