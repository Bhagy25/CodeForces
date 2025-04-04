#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[j] != '+')
            {

                if (str[j] < str[i])
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }
    cout << str;

    return 0;
}