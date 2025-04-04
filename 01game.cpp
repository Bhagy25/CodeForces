#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count1=0;
        int count0=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='1') {
                count1++;
            }
            else {
                count0++;
            }
        }
        int result=min(count0,count1);
        if(result%2!=0) {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NET"<<endl;
        }
    }
    return 0;
}