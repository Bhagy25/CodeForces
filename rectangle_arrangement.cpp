#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int cases;
    int no;
    cin >> cases;
    int l = 0;
    int w = 0;
    for (int i = 1; i <= cases; i++)
    {
        cin >> no;
        l=0;
        w=0;
        for (int i = 1; i <= no; i++)
        {
            int l1, w1;
            cin >> l1 >> w1;
            if (l == 0 || w == 0)
            {
                l = l1;
                w = w1;
            }
            else
            {
                l = max(l, l1);
                w = max(w, w1);
            }
        }
        cout << 2 * (l + w) << endl;
    }
    return 0;
}