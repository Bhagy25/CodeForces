#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int l=str.size();
    int result=(l+1)*26-l;
    cout<<result<<endl;
    return 0;
}