#include <iostream>
#include<vector>
using namespace std; 

int main()
{
    int n ; 
    cin>> n ;
    vector<int> arr(n) ;
    for(int &val : arr)
    {
        cin>>val ; 
    }
    vector<int> mindis  ;
    vector<int> maxdis  ;
    for(int i=1 ; i<n-1 ;i++)
    {  
        int tmin=min((abs(arr[i]-arr[i-1])) ,(abs(arr[i]-arr[i+1])));
        mindis.push_back(tmin); 
    }
    for(int i=0 ; i<n ;i++)
    {  
        int tmax=max((abs(arr[i]-arr[0])) ,(abs(arr[i]-arr[n-1])));
        maxdis.push_back(tmax); 
    }
    for(int i =0 ; i<n ; i++)
    {
        cout<<mindis[i] <<" " <<maxdis[i] <<endl; 
    }
    return 0 ; 
}