#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll idx = 0;        
        while (1)
        {
            if ((x & (1 << idx)) != (y & (1 << idx)))
            {   
                // bit by bit checking thats why 2 raised to k
                // for idx=0 1st bit = 0 and 1 are checked for idx=1 2nd bit which means x,y & 2 bits are checked
                // for idx=2 3rd bit is checked in which 3,4 are also included that is if for example bit 4 is same that is number upto 1111 are included so check only bits not every number
                break;
            }
            idx++;           
        }
        ll answer=(1 << idx);
        cout << answer << endl;
    }
    return 0;
}
