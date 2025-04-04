#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    int j=0;
    string s="hello";
    int target=s.size();
    for(int i=0;i<str.size();i++) {
        if(str[i]==s[j]) {
            j++;
        }
        if(j==target) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}