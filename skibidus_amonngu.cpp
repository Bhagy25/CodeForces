#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        string newstr=str.substr(0,str.size()-2);
        string s=newstr+'i';
        cout<<s<<endl;
    }
    return 0;
}