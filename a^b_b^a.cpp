#include<bits/stdc++.h>
using namespace std;
int main () {
    long long int a,b;
    cin>>a>>b;
    long long int sum=pow(a,b)-pow(b,a);
    cout<<sum<<endl;
    return 0;
}