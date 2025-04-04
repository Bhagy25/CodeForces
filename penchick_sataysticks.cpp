#include <bits/stdc++.h>
using namespace std;
//permuted string so n length and numbers upto n
//in this question compare with index
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(v[i] - (i + 1)) <= 1)
            {
                c1++;
            }
        }
        if (c1 == n)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}