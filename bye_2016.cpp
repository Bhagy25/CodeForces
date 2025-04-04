#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin>>n>>k;
    int time=k;
    int count=0;
    for(int i=1;i<=n;i++) {
        time+=5*i;
        if(time<=240) {
            count++;
        }
        else {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}