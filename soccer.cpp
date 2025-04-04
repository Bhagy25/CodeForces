#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Case 1: Check if x1 is in the range [y1, y2) 
        if (y2 > x2) {
            // We check if x1 lies between y1 and y2.
            if (x1 >= y1 && x1 < y2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
        // Case 2: Check if y1 is in the range [x1, x2) 
        else if (x2 > y2) {
            // We check if y1 lies between x1 and x2.
            if (y1 >= x1 && y1 < x2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}


