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
        int y1 = (x ^ (x - 1));
        int y2 = (x ^ (x - 2));
        if (x - 1 > 2 && x - 2 > 2)
        {
            if (y1 > y2 && (x - 1) > 2)
            {
                cout << x - 1 << endl;
            }

            else if (y1 <= y2 && (x - 2) > 2)
            {
                cout << x - 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}