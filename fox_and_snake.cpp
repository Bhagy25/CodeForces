#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            for (int i = 1; i <= m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else if (i % 4 == 0 && i % 2 == 0)
        {
            cout << "#";
            for (int k = 2; k <= m; k++)
            {
                cout << ".";
            }
            cout << endl;
        }
        else if (i % 4 != 0 && i % 2 == 0)
        {
            for (int k = 1; k < m; k++)
            {
                cout << ".";
            }
            cout << "#";
            cout << endl;
        } 
    }
    return 0;
}