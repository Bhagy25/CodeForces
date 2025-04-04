#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<ll> l, u;
        map<ll, char> m;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!l.empty())
                {
                    ll index1 = l.top();
                    m[index1] = '$';
                    l.pop();
                }
                continue;
            }
            if (s[i] == 'B')
            {
                if (!u.empty())
                {
                    ll index2 = u.top();
                    m[index2] = '$';
                    u.pop();
                }
                continue;
            }

            m[i] = s[i];
            if (isupper(s[i]))
            {
                u.push(i);
            }
            else
            {
                l.push(i);
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if ( m.count(i) && m[i] != '$')//m.count(i) is used because when b or B is encountered no i will be given to the map key so that value will be skipped
            {
                cout << m[i];
            }
        }
        cout << endl;
    }
    return 0;
}