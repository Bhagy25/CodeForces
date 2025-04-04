#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, a;
        cin >> l >> r >> a;
        long long int maxi1 = (r / a) + (r % a);
        long long int c = (r / a) * a - 1;
        if (c >= l && c <= r)
        {
            long long int maxi2 = (c / a) + c % a;
            cout << max(maxi1, maxi2) << endl;
        }
        else
        {
            cout << maxi1 << endl;
        }
    }
    return 0;
}