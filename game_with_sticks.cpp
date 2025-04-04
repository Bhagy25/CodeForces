#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    bool flag=false;
    if(n==m) {
        int i=n;
        int x=n*n;
        while(x!=0) {
            x-=(2*i)-1;
            if(flag==false) {
                flag=true;
            }
            else{
                flag=false;
            }
            i--;
        }
        if(flag==true) {
            cout<<"Akshat"<<endl;
        }
        else{
            cout<<"Malvika"<<endl;
        }
    }
    else {
        int i=n;
        int j=m;
        int y=m*n;
        while(y!=0) {
            y-=(i+j)-1;
            if(flag==false) {
                flag=true;
            }
            else{
                flag=false;
            }
            i--;
            j--;
        }
        if(flag==true) {
            cout<<"Akshat"<<endl;
        }
        else{
            cout<<"Malvika"<<endl;
        }
    }
    return 0;
}