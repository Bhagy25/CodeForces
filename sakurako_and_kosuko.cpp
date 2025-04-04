#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, K;
        cin >> a >> b >> K;
        int da = abs(K - a);
        int db = abs(K - b);
        int x1, x2;
        cin >> x1 >> x2;
        if (da % x1 == 0 && db % x2 == 0)
        {
            int p1 = da / x1;
            int q1 = db / x2;
            if (p1 < q1)
            {
                cout << "Krishna" << endl;
            }
            else
            {
                cout << "Het" << endl;
            }
        }
        else if (da % x1 == 0 && db % x2 != 0)
        {
            int p2 = da / x1;
            cout << "Krishna" << endl;
        }
        else if (da % x1 != 0 && db % x2 == 0)
        {
            int q2 = db / x2;
            cout << "Het" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}