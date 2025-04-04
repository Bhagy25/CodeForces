#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        long long int odd = 0;
        long long int even = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i%2==0) 
            {
                odd += v[i];
            }
            else
            {
                even += v[i];
            }
        }

        long long int o = (n + 1) / 2;
        long long int e = n - o;

        if (odd % o == 0 && even % e == 0)
        {
            if ((odd / o) == (even / e))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
