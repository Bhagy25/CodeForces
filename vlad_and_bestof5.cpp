#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char str[5];
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (str[i] == 'A')
            {
                count1++;
            }
            else if (str[i] == 'B')
            {
                count2++;
            }
        }
        if (count1 > count2)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}