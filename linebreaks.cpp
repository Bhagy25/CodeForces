#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        int len = 0;
        vector<string> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x = str[i].size();
            if (len + x <= m)
            {
                len += x;
                count++;
            }
            else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}