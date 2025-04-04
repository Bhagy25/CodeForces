#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i==0 || x != v.back())
            {
                v.push_back(x);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if ((i == 0 || v[i - 1] > v[i]) && (i == v.size() - 1 || v[i] < v[i + 1]))
            {
                c1++; // for valleys
            }
        }
        if (c1 == 1)
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