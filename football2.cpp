#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    string s1=v[0];
    string s2="";
    for(int i=0;i<n;i++) {
        if(v[i]!=s1) {
            s2=v[i];
            break;
        }
    }
    int c1=0; //s1
    int c2=0; //s2
    for(int i=0;i<n;i++) {
        if(v[i]==s1) {
            c1++;
        }
        else if(v[i]==s2) {
            c2++;
        }
    }
    if(c1>c2) {
        cout<<s1<<endl;
    }
    else {
        cout<<s2<<endl;
    }
    return 0;      
}