#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int x = n % 10;
        if (x == 4 || x == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 7 || count == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}