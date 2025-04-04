#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s = "";
        if (x > 45)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 9; i >= 1; i--)
            {
                if (x <= i && x <= 9)
                {
                    s += to_string(x);
                    x = 0;
                    break;
                }
                else
                {
                    s += to_string(i);
                    x -= i;
                }
            }
            if (x)
            {
                cout << "-1" << endl;
            }
            else
            {
                reverse(s.begin(), s.end());
                cout << s << endl;
            }
        }
    }
    return 0;
}