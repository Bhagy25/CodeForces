#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    int freq[26]={0};
    int count=0;
    for(int i=0;i<str.size();i++) {
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++) {
        if(freq[i]>0) {
            count++;
        }
    }
    if(count%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}