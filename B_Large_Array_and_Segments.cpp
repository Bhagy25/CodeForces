#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, n) for (ll i = 0; i < n; i++)
#define rf(i, n) for (ll i = (ll)(n) - 1; i >= 0; i--)
#define vec(name, n) vector<ll> name(n)
#define avec(name, n) vector<int> name(n)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        vec(a, n);
        f(i, n) cin >> a[i];
        
        ll sum = accumulate(a.begin(), a.end(), 0ll);
        ll need = (x + sum - 1) / sum;  

        if (need > k)
            cout << 0 << endl;
        else
        {
            ll sel = (need - 1) * sum;
            ll el = (need - 1) * n;

            rf(i, n)
            {
                sel += a[i];
                if (sel < x)
                    el++;
                else
                    break;
            }

            cout << n * k - el << endl;
        }
    }

    return 0;
}

