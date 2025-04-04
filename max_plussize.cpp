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
        int arr[n];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
            {
                if (arr[i] > sum1)
                {
                    sum1 = arr[i];
                }
            }
            for (int i = 1; i < n; i = i + 2)
            {
                if (arr[i] > sum2)
                {
                    sum2 = arr[i];
                }
            }
            if (sum1 > sum2)
                cout << sum1 + n / 2 << endl;
            else
                cout << sum2 + n / 2 << endl;
        }
        else
        {
            for (int i = 0; i < n; i = i + 2)
            {
                if (arr[i] > sum1)
                {
                    sum1 = arr[i];
                }
            }
            for (int i = 1; i < n; i = i + 2)
            {
                if (arr[i] > sum2)
                {
                    sum2 = arr[i];
                }
            }
            if (sum1 >= sum2)
                cout << sum1 + (n + 1) / 2 << endl;
            else
                cout << sum2 + (n - 1) / 2 << endl;
        }
    }
    return 0;
}