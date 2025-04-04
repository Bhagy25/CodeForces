#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '1')
            {
                bool t1 = true;
                bool t2 = true;
                for (int k = 0; k <= i; k++)
                {
                    if (v[k][j] == '0')
                    {
                        t1 = false;
                        break;
                    }
                }
                for (int k = 0; k <= j; k++)
                {
                    if (v[i][k] == '0')
                    {
                        t2 = false;
                        break;
                    }
                }
                if (!t1 && !t2)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
