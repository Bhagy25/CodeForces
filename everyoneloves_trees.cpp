#include <bits/stdc++.h>
using namespace std;
// logic is number is only made of 3s and 6s
// number should be divisible by 66 and 33 ideally 66 because 66 divisible by 33
//  66 is divisble by 2,3,11 so last digit should be even it means 6
// if number is divisible by 3 it means sum of all the terms should be divisible by 3 here it would be bcs it contains only 3s and 6s
// for number to be divisble by 11 sum odd terms - sum even terms should be divisible by 11 but in this question to be least here ideally 0
// for n to be even last 2 digit should be 66 and other all should be 3s to be min and satisfy all above conditions
// for n to be odd last 5 digit should be 36366 and other all 3s which would occur even number of times satisfying the above conditions
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str = "";
        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
        }
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                str += '3';
            }
            str += "66";
            cout << str << endl;
        }
        else if (n % 2 != 0)
        {
            for (int i = 0; i < n - 5; i++)
            {
                str += '3';
            }
            str += "36366";
            cout << str << endl;
        }
    }
    return 0;
}