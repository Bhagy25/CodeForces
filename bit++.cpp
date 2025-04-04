#include <iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++) {
        string str;
        cin>>str;
        if(str=="++X" || str=="X++") {
            count=count+1;
        }
        if(str=="--X" || str=="X--") {
            count=count-1;
        }
    }
    cout<<count<<endl;
  return 0;
}