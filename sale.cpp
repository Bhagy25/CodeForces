#include <bits/stdc++.h>
using namespace std;
//atmost
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < m; i++)
    {
        if (arr[i] < 0)
        {
            result += abs(arr[i]);
        }
        
    }
    cout << result << endl;
    return 0;
}