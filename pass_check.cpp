#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    int len=str.size();
    int check=0;
    int a=0,b=0,c=0,d=0;
    if(len>=5) {
        for(int i=0;i<len;i++) {
            if(str[i]<='z' && str[i]>='a') {
                a=1;
            }
            if(str[i]<='Z' && str[i]>='A') {
                b=1;
            }
            if(str[i]<='9' && str[i]>='0') {
                c=1;
            }
            if(a+b+c==3) {
                cout<<"Correct"<<endl;
                return 0;
            }
            if(str[i]=='!' || str[i]=='?' || str[i]=='.' || str[i]=='`' || str[i]==',' || str[i]=='_') {
                d=1;
            }
            if(a+b+c+d==4) {
                cout<<"Correct"<<endl;
                return 0;
            }
        }
        if(a+b+c+d<4) {
            cout<<"Too weak"<<endl;
        }
    }
    else{
        cout<<"Too weak";
    }
    return 0;
}