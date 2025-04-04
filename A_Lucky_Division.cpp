#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    bool flag=1;
    int sum;
    for(int i=0;i<str.size();i++) {
        if(str[i]=='4' || str[i]=='7') {
            continue;
        }
        else {
            flag=0;
        }   
    }
    sum=stoi(str);// stoi converts string to integer
    if(flag) {
        cout<<"YES"<<endl;
    }
    else {
        if(sum%4==0 || sum%7==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}