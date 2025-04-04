#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        int c_e = 0;
        int d = k;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                c_e++;
            }
            if (v[i] % k == 0)
                d = 0;
            else
                d = min(d, k - v[i] % k);
        }
        if (k != 4)
        {
            cout << d << endl;
        }
        else
        {
            if (c_e >= 2)
            {
                cout<<0<<endl;
            }
            else if (c_e == 1)
            {
                cout<<min(d,1)<<endl;
            }
            else {
                cout<<min(2,d)<<endl;
            }
        }
    }
    return 0;
}