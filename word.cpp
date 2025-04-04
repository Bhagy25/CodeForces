#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    int count_c=0;
    int count_s=0;
    for(int i=0;i<str.size();i++) {
        if(str[i]>=65 && str[i]<=90 ) {
            count_c++;
        }
        else {
            count_s++;
        }
    }
    if(count_c>count_s) {
        for(int i=0;i<str.size();i++) {
            str[i]=toupper(str[i]);
        }
        cout<<str<<endl;
    }
    else {
        for(int i=0;i<str.size();i++) {
            str[i]=tolower(str[i]);
        }
        cout<<str<<endl;
    }
    return 0;
}