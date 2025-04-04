#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = 0; i < n - m; i++)
        {
            cout << n - i << " ";
        }
        for (int i = 0; i < m; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}