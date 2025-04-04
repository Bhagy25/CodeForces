#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    int result=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++) {
        if(result>sum/2) {
            break;
        }
        else {
            result+=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}