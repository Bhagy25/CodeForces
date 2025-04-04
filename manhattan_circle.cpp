#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// max from column and max from row
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int cdx = 0;
        long long int rdx = 0;
        long int max1 = INT_MIN;
        long long int max2 = INT_MIN;
        vector<string> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll amt = 0;
            for (ll j = 0; j < m; j++)
            {
                if (v[i][j] == '#')
                {
                    amt++;
                    if (amt > max1)
                    {
                        rdx = i;
                        max1 = amt;
                    }
                }
            }
        }
        for (ll j = 0; j < m; j++)
        {
            ll amt1 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i][j] == '#')
                {
                    amt1++;
                    if (amt1 > max2)
                    {
                        cdx = j;
                        max2 = amt1;
                    }
                }
            }
        }
        cout << rdx + 1 << " " << cdx + 1 << endl;
    }
    return 0;
}