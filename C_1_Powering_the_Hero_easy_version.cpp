#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> powers(n);
        for (auto &it : powers)
        {
            cin >> it;
        }
        priority_queue<ll> pq;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (powers[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(powers[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}