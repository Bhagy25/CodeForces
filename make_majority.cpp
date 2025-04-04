#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s1,s2="";
        cin>>s1;
        bool flag=false;
        int ones=0;
        int zeroes=0;
        for(int i=0;i<s1.size();i++) {
            if(s1[i]=='1') {
                s2+='1';
                flag=false;
            }
            else if(s1[i]=='0' && flag==false) {
                s2+='0';
                flag=true;
            }
        }
        for(int i=0;i<s2.size();i++) {
            if(s2[i]=='1') {
                ones++;
            }
            else{
                zeroes++;
            }
        }
        if(ones>zeroes) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}