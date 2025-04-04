#include<bits/stdc++.h>
using namespace std;
int main () {
    int q;
    cin>>q;
    while(q--) {
        string str1,str2;
        cin>>str1>>str2;
        int count=0;
        int a=str1.size();
        int b=str2.size();
        for(int i=0;i<a;i++) {
            if(str1[i]==str2[i]) {
                count++;
            }
            else if(str1[i]!=str2[i]) {
                break;
            }
        }
        if(count>0) {
            cout<<a+b-count+1<<endl;
        }
        else {
            cout<<a+b<<endl;
        }
}
 
 return 0;
}