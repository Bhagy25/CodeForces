#include <bits/stdc++.h>
using namespace std;
//replace char of min freq with max freq
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> freq(26);
        for (int i = 0; i < n; i++)
        {
            freq[str[i] - 'a']++;
        }
        pair<pair<int, char>, int> low = {{freq[str[0] - 'a'], str[0]}, 0};
        pair<pair<int, char>, int> high = {{freq[str[0] - 'a'], str[0]}, 0};
        for (int i = 1; i < n; i++)
        {
            low = min(low, {{freq[str[i] - 'a'], str[i]}, i});//first freq is checked if equal then char is checked and then at last i is checked
            high = max(high, {{freq[str[i] - 'a'], str[i]}, i});
        }
        str[low.second] = str[high.second];
        cout<<str<<endl;
    }
    return 0;
}