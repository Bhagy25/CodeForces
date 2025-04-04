#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        int maxi = 0;
        int cnt;

        string s;
        cin >> s;
        s += s;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c)
            {
                cnt = 0;
                for (int j = i; j < 2 * n; j++)
                {
                    if (s[j] == 'g')
                        break;
                    cnt++;
                }
                maxi = max(maxi, cnt);
                i = i + cnt;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}