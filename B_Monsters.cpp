#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b) {
    if (a.first == b.first) {  
        return a.second < b.second; 
    }
    return a.first > b.first; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].first %= k;  
            v[i].second = i + 1;
            if (v[i].first == 0) {  
                v[i].first = k;
            }
        }

        sort(v.begin(), v.end(), comp);

        for (int i = 0; i < n; i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}
