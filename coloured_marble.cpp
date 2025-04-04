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
        int u = 0;
        int k = 0;
        // u means marble having freq 1
        // k means k diff colour marble
        vector<int> c(n, 0), freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            freq[c[i]]++;
        }
        // here values of vector <=n
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 1)
            {
                u++;
            }
            if (freq[i] > 1)
            {
                k++;
            }
        }
        cout << 2*((u+1)/2)+k <<endl;
    }
    return 0;
}
