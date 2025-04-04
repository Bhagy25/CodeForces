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
        if (n <= 4)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((i + 1) % 2 == 0 && (i + 1) != 4)
                {
                    cout << i + 1 << " ";
                }
            }
            cout << 4 << " " << 5 << " ";
            for (int i = 0; i < n; i++)
            {
                if ((i + 1) % 2 != 0 && (i + 1) != 5)
                {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}