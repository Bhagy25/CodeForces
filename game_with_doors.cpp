#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r; 
        cin>> L >> R;
        int il = max(l, L);
        int ir = min(r, R);
        if ((r < L) || (R<l))
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = ir - il;
            if (min(l, L) < il)
            {
                ans++;
            }
            if (max(r, R) > ir)
            {
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
