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
        int a[n];
        int sum = 0;
        int count = 0;
        if (n != 1)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            int avg = sum / n;

            for (int i = 0; i < n-1; i++)
            {
                if (a[i] >= avg)
                {
                    int x = a[i] - avg;
                    a[i + 1] += x;
                    a[i]-=x;
                }
            }
            for (int i = 0; i < n-1; i++)
            {
                if (a[i] == a[i + 1])
                {
                    count++;
                }
            }
            if (count == n-1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else {
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
