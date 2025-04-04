#include<bits/stdc++.h>
using namespace std;
int main ()  {
    int n;
    cin>>n;
    float sum=0.00;
    vector<int>p(n);
    for(int i=0;i<n;i++) {
        cin>>p[i];
        sum+=p[i];
    }
    float result=sum/n;
    printf("%.12f",result);
    return 0;
}