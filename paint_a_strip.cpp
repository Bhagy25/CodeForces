#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n <= 4 && n > 1)
        {
            cout << 2 << endl;
        }
        else
        {
            int ones = 4;
            int ans = 2;
            while (ones < n)
            {
                ones = 2 * (ones + 1);
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
