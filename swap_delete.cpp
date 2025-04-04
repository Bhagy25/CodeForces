#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        int c0=0;
        int c1=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='0') {
                c0++;
            }
            else {
                c1++;
            }
        }
        int l=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='0') {
                c1--;
            }
            else if(str[i]=='1') {
                c0--;
            }
            if(c1==-1 || c0==-1) {
                break;
            }
            l++;
        }
        cout<<str.size()-l<<endl;
    }
    return 0;
}