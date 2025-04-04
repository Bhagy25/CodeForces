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
        int arr[n][n];
        int sum = 0;
        int mini1 = INT16_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int c1 = 1;
        // below main diagonal
        for (int k = 1; k <= n - 1; k++)
        {
            int mini = INT16_MAX;
            for (int i = c1, j = 0; i < n, j < n - k; i++, j++)
            {
                mini = min(mini, arr[i][j]);
            }
            if (mini < 0)
            {
                sum += abs(mini);
            }
            c1++;
            if (c1 == n + 1)
            {
                break;
            }
        }
        // main diagonal
        for (int i = 0, j = 0; i < n, j < n; i++, j++)
        {

            mini1 = min(mini1, arr[i][j]);
        }
        if (mini1 < 0)
        {
            sum += abs(mini1);
        }
        // above main diagonal
        int c2 = 1;
        for (int k = 1; k <= n - 1; k++)
        {
            int mini2 = INT16_MAX;
            for (int i = 0, j = c2; i < n - k, j < n; i++, j++)
            {
                mini2 = min(mini2, arr[i][j]);
            }
            if (mini2 < 0)
            {
                sum += abs(mini2);
            }

            c2++;
            if (c2 == n + 1)
            {
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}