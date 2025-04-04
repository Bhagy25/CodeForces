#include<bits/stdc++.h>
using namespace std;
int main () {
    int q;
    cin>>q;
    while(q--) {
        string str1;
        string str2;
        cin>>str1>>str2;
        string s1="";
        string s2="";
        int lcm=(str1.size()*str2.size())/__gcd(str1.size(),str2.size());
        for(int i=0;i<lcm/str1.size();i++) {
            s1+=str1;
        }
        for(int i=0;i<lcm/str2.size();i++) {
            s2+=str2;
        }
        if(s1==s2) {
            cout<<s1<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}