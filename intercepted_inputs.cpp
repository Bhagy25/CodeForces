#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int a,b;
        int i=0,j=n-1;
       while(j>i){
        if(arr[i]*arr[j]>n-2){
            j--;
        }
        else if(arr[i]*arr[j]<n-2){
            i++;
        }
        else if(arr[i]*arr[j]==n-2){
           break;
        }
       }
       cout<<arr[i]<<" "<<arr[j]<<endl;
    }
    return 0;
}