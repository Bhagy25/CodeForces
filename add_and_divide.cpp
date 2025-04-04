#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll divide(ll x, ll y)
{
    ll count = 0;
    while (x != 0)
    {
        x /= y;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll temp = 0;
        if (a > b)
        {
            if (b == 1)
            {
                b = 2;
                temp = 1;
            }
            ll mini = INT_MAX;
            for (ll k = 0; (k) < 30; k++)
            {
                mini = min(mini, k + divide(a, b + k));
            }
            if (temp == 1)
            {
                cout << mini + 1 << endl;
            }
            else
            {
                cout << mini << endl;
            }
        }
        else if (a == b)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
// //Author : Maulik Thakkar
// #include<bits/stdc++.h>
// #include<unordered_set>
// #define lli long long  
// const lli MOD=1e9+7 ;
// const lli MOD2= 998244353; 
// const lli inf=1e18; 
// bool sortbysec(const std::pair<lli,lli> &a,const std::pair<lli,lli> &b) { return (a.second < b.second); } 
// lli power(lli n,lli a){ lli res=1; while(a){ if(a%2) res*=n,a--; else   n*=n,a/=2;} return res;}
// lli modpower(lli n,lli a,lli p){ lli res=1; while(a){ if(a%2) res= ((res*n)%p) ,a--; else n=((n*n)%p),a/=2;} return res;}
// lli fastprime(lli a){ if (a != 2 && a % 2 == 0 || a < 2) return 0;  for(lli i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}  
// lli mod_mul_inverse(lli a,lli b) {return modpower(a , b-2, b);}
// using namespace std;
// lli gcd(lli a , lli b){
// if(b==0) return a;
// else return gcd(b,a % b );}



// //   ****************************************  // 

// // This function calculates how many times we have to divide a by b to make it 0.

// lli findAns(lli a , lli b)
// {
//     lli cnt = 0;
//     while(a)
//     {
//         a/=b;
//         cnt++;
//     }
//     return cnt;
// }

// // ******************************************* //



// void help()
// {
//     lli a, b;
//     cin>>a>>b;

//     lli ans = inf;

//     for(lli i = 0 ; i < 30 ; i++)
//     {
//         // If b == 1 then we cant divide by b to make a zero.
//         if(b==1 && i==0) continue;
//         // i moves to increase b to (b+i)
//         // findAns(a , b+i) moves to make a 0 using (b+i).           
//         ans = min(ans , i + findAns(a , b+i));
//     }
//     cout<<ans<<endl;

// }

// signed main()
// {
//     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     lli t;
//     cin>>t;
//     //inputFile = "";
//     //outputFile = "";
//     //freopen(inputFile, "r", stdin);
//     //freopen(outputFile, "w", stdout);
//     while(t--)
//     {
//         help();
//     }
//     return 0;
// }