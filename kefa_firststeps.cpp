#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            count++;
        }
        else
        {

            count = 0;
        }
        if (count >= result)
        {
            result = count;
        }
    }
    cout << result + 1 << endl;
    return 0;
}