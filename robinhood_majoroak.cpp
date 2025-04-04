#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        //use formula of sum of ap here a=n;d=-1;no. of terms=k
        long long int result =  (k * (2 * n - k + 1)) / 2;;
        
        if(result%2==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}