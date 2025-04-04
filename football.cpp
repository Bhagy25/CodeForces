#include<bits/stdc++.h>
using namespace std;
int main () {
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++) {
        if(str.substr(i,7)=="1111111" || str.substr(i,7)=="0000000") {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0; 
}
/*
#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    char s[101];
    cin >> s;  // Read the input string
    
    int n = strlen(s);  // Get the length of the string
    int count = 1;  // Start counting the first character
    
    // Traverse the string to find consecutive characters
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;  // Increment count if the current character is the same as the previous one
            if (count == 7) {  // If count reaches 7, it's a dangerous situation
                cout << "YES" << endl;
                return 0;  // Exit the program as we've found the dangerous situation
            }
        } else {
            count = 1;  // Reset count when the character changes
        }
    }
    
    cout << "NO" << endl;  // If no dangerous situation is found, print NO
    return 0;
} */