#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int chest = 0, bicep = 0, back = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 1)
        {
            chest += a[i - 1];
        }
        else if (i % 3 == 2)
        {
            bicep += a[i - 1];
        }
        else if (i % 3 == 0)
        {
            back += a[i - 1];
        }
    }
    if (chest > bicep && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (bicep > chest && bicep > back)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}