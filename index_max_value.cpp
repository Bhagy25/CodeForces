#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<long long int> v(n);
        char ch;
        long long int l, r;
        vector<long long int> res(m);
        long long int maxi=INT_MIN;
        for (long int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxi=max(maxi,v[i]);

        }
        for (long long int i = 0; i < m; i++)
        {

            cin >> ch >> l >> r;
            if(ch=='+') {
                if(maxi>=l && maxi<=r) {
                    maxi++;
                }
                res[i]=maxi;
            }
            if(ch=='-') {
                if(maxi>=l && maxi<=r) {
                    maxi--;
                }
                res[i]=maxi;
            }
        }
        for(long long int i=0;i<m;i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}