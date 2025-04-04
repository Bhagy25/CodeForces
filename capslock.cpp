#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    char c;
    bool flag=true;
    for(int i=1;i<str.size();i++) {
        if(islower(str[i])) {
            flag=false;
        }
    }
    if(flag==true) {
        for(int i=0;i<str.size();i++) {
            if(islower(str[i])) {
                c=toupper(str[i]);
            }
            else {
                c=tolower(str[i]);
            }
            cout<<c;
         }
         cout<<endl;
    }
    else {
        cout<<str<<endl;
    }   
    return 0;
}