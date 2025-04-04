#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = true;
        for (auto &it : v)
        {
            cin >> it;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                int c = v[i];
                v[i] = 0;
                v[i + 1] -= c;
            }
            else {
                flag=false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}