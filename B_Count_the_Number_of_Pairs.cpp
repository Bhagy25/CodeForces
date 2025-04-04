#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c1[26]={0};
        int c2[26]={0};
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                c1[s[i] - 97]++;
            }
            else
            {
                c2[s[i] - 65]++;
            }
        }
        ll ans = 0;
        ll extra = 0;
        for (ll i = 0; i < 26; i++)
        {
            ans += min(c1[i], c2[i]);
            extra += abs(c1[i] - c2[i]) / 2;
        }
        ans += min(k, extra);
        cout << ans << endl;
    }
    return 0;
}