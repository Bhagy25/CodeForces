#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int crime=0;
    int police =0;
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        if(x>0) {
            police=police+x;
        }
        else {
            if(police<1) {
                crime++;
            }
            else {
                police--;
            }
        }
    }
    cout<<crime<<endl;
    return 0;   
}