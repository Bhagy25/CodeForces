#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<char>str(n);
        for(int i=0;i<n;i++) {
            cin>>str[i];
        }
        
        int count=0;
        for (int i = 0; i < n-1; i++)
        {
            if(str[i]<=str[i+1]) {
                count++;
            }
        }
        if(count==n-1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}