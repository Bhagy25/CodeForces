#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x;
        int maxi=0;
        for(int i=2;i<30;i++) {
            int power=pow(2,i)-1;//(1<<k)-1 is also correct
            if(n%power==0) {
                maxi=max(maxi,power);
            }
        }
        cout<<n/maxi<<endl;
    }
    return 0;
}
//#include<bits/stdc++.h>
// using namespace std;
// int main () {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int x;
//         for(int i=2;i<30;i++) {
//             int power=pow(2,i)-1;
//             if(n%power==0) {
//                 cout<<n/power<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }