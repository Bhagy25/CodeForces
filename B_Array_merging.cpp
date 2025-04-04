#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll cnt1[2*n+1]={0};
        ll cnt2[2*n+1]={0};
        for(ll i=0;i<n;i++) {
            ll j=i;
            while(j<n && a[j]==a[i]) {
                j++;
                cnt1[a[i]]=max(cnt1[a[i]],j-i);
            }
            i=j-1;
        }
        for(ll i=0;i<n;i++) {
            ll j=i;
            while(j<n && b[j]==b[i]) {
                j++;
                cnt2[b[i]]=max(cnt2[b[i]],j-i);
            }
            i=j-1;
        }
        ll ans=0;
        for(ll i=0;i<=2*n;i++) {
            ans=max(ans,cnt1[i]+cnt2[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}