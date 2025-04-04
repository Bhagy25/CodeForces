#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        int k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int flag = 0;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].begin()+m);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[v[i][0]] == 0)
            {
                arr[v[i][0]] = i + 1;
            }
            else
            {
                flag++;
                break;
            }

            for (int j = 0; j < m - 1; j++)
            {
                if (v[i][j + 1] - v[i][j] != n)
                {
                    flag++;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}