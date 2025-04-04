#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int x = 0, y = 0;
        bool flag = false;
        for (int j = 0; j < 100; j++)
        {
            for (int i = 0; i < n; i++)
            {

                if (x == a && y == b)
                {
                    flag = true;
                    break;
                }
                if (str[i] == 'N')
                {
                    y++;
                }
                if (str[i] == 'E')
                {
                    x++;
                }
                if (str[i] == 'S')
                {
                    y--;
                }
                if (str[i] == 'W')
                {
                    x--;
                }
            }
            if(flag==true) {
                break;
            }
        }
        if (flag==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}