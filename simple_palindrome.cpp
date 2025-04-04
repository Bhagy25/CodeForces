#include <bits/stdc++.h>
using namespace std;
const string Vowels = "aeiou";
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string result = "";
        int seq = n / 5;
        int rem = n % 5;

        for (int i = 0; i < rem; i++)
        {
            result += Vowels[i];
        }
        for (int i = 0; i < seq; i++)
        {
            result += Vowels;
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}