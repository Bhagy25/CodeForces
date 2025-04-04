#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k; // n questions m is missing questions k is questions known by monocarp
        cin >> n >> m >> k;
        vector<ll> v(m); // v is array of m missing questions
        for (ll i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        vector<ll> v1(k); // v1 is listof questions known by monocarp
        for (ll i = 0; i < k; i++)
        {
            cin >> v1[i];
        }

        if (k <= n - 2)
        {
            for (int i = 1; i <= m; i++)
            {
                cout << 0;
            }
            cout << endl;
        }
        else if (k == n)
        {
            for (int i = 1; i <= m; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
        else if(k==n-1)
        {
            ll missing=n;
            for (ll i = 1; i <= k; i++)
            {
                if (i != v1[i - 1])
                {
                    missing = i;
                    break;
                }
            }
            for (ll i = 0; i < m; i++)
            {
                if (missing == v[i])
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}