#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++) {
        int p,v,t;
        cin>>p>>v>>t;
        int sum=p+v+t;
        if(sum>1) {
            count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}