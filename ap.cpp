#include<bits/stdc++.h>
using namespace std;
void solve () {
    int a,b,c;
    cin>>a>>b>>c;
    int new_a=2*b-c;
    if(new_a%a==0 && new_a>=a && new_a!=0) {
        cout<<"YES"<<endl;
        return;
    }
    int new_b=(a+c)/2;
    if((new_b)%(b)==0 && (new_b)>=(b) && (new_b)!=0 && (c-a)%2==0) {
        cout<<"YES"<<endl;
        return;
    }
    int new_c=2*b-a;
    if(new_c%c==0 && new_c>=c && new_c!=0) {
        cout<<"YES"<<endl;
        return;
    }
    else {
        cout<<"NO"<<endl;
    }
}
int main () {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
#include <iostream>
using namespace std;
 
/*bool canFormAP(int a, int b, int c) {
    // Check the three possibilities
    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) return true;
    if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) return true;
    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) return true;
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (canFormAP(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/
/*
m=2b-c/a (if m multiplied with a)
*/