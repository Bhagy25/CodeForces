#include <bits/stdc++.h>
using namespace std;
// can use str.substr() tp print substring
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int pos=-1;
        bool flag = false;
        for (int i = 1; i < str.size() - 1; i++)
        {
            if (str[i] == 'a')
            {
                pos = i;
                flag = true;
                break;
            }
            flag = false;
        }
        if (!flag)
        {
            cout << str[0] << " ";
            for (int i = 1; i <= str.size() - 2; i++)
            {
                cout << str[i];
            }
            cout << " ";
            cout << str[str.size() - 1] << endl;
        }
        if (flag)
        {
            for (int i = 0; i <=pos - 1; i++)
            {
                cout << str[i];
            }
            cout << " ";
            cout << str[pos] << " ";
            for (int i = pos + 1; i < str.size(); i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}