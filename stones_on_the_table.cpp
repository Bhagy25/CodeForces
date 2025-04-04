#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    int count=0;
    for(int i=0;i<str.size()-1;i++) {
        if((str[i]=='R' && str[i+1]=='R') ||(str[i]=='B' && str[i+1]=='B' || (str[i]=='G' && str[i+1]=='G'))) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}