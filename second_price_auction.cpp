#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    
    int index=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max=arr[i];
            index = i;
        }
    }
    sort(arr,arr+n);
    cout << index+1 << " " << arr[n-2] << endl;
    return 0;
}