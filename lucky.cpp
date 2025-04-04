#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int digit;
        cin >> digit;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int x = digit % 10;
            if (i <= 2)
            {
                sum1 += x;
            }
            else
            {
                sum2 += x;
            }
            digit /= 10;
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}