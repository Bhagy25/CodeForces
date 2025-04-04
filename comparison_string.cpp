#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int s;
        int count;
        int maxi=1;
        if(str[0]=='<') {
            s=0;
        }
        else {
            s=1;
        }
        for(int i=0;i<n;i++) {
            if(str[i]=='<') {
                if(s==0) {
                    s=1;
                    count=0;
                }
                count++;
            }
            else {
                if(str[i]=='>') {
                    if(s==1) {
                        s=0;
                        count=0;
                    }
                }
                count++;
            }
            maxi=max(count,maxi);
        }
        cout<<maxi+1<<endl;
    }
    return 0;
}

